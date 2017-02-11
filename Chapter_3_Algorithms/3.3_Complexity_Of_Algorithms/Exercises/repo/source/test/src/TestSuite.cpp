#include "TestSuite.h"
#include "AllHeaders.h"
#include "Maths.h"
#include <cstdlib>
#include <cstdio>

const int MIN = 1;
const int MAX = 46;

namespace dc = discrete_mathematics::chapter_3;

dc::TestSuite::TestSuite() {
    m_initialize_test_cases_dictionary();
}

dc::TestSuite::~TestSuite() {}

void dc::TestSuite::run(int test_case) {
    if (m_test_cases_dictionary[test_case])
        m_execute(m_test_cases_dictionary[test_case]);
}

void dc::TestSuite::run_all() {
    for (int test_case = MIN; test_case <= MAX; ++test_case)
        if (m_test_cases_dictionary[test_case])
            m_execute(m_test_cases_dictionary[test_case]);
}

void dc::TestSuite::m_initialize_test_cases_dictionary() {
    m_test_cases_dictionary[1] = &TestSuite::m_test_solution_1;
    m_test_cases_dictionary[2] = &TestSuite::m_test_solution_2;
    m_test_cases_dictionary[3] = &TestSuite::m_test_solution_3;
    m_test_cases_dictionary[4] = &TestSuite::m_test_solution_4;
    m_test_cases_dictionary[5] = &TestSuite::m_test_solution_5;
    m_test_cases_dictionary[6] = &TestSuite::m_test_solution_6;
    m_test_cases_dictionary[7] = &TestSuite::m_test_solution_7;
    m_test_cases_dictionary[8] = &TestSuite::m_test_solution_8;
    m_test_cases_dictionary[9] = &TestSuite::m_test_solution_9;
    m_test_cases_dictionary[10] = &TestSuite::m_test_solution_10;
    m_test_cases_dictionary[11] = &TestSuite::m_test_solution_11;
}

void dc::TestSuite::m_execute(ptrFunc function) {
    (*this.*function)();
}

void dc::TestSuite::m_show_banner(int test_case) {
    printf("-----------------------------------------------------------\n");
    printf("                    Solution %d                            \n", test_case);
    printf("-----------------------------------------------------------\n");    
}

void dc::TestSuite::m_start_timer() {
    m_start_time = std::clock();
}

void dc::TestSuite::m_end_timer() {
    printf("Execution time == [%.8f] seconds\n",
           (std::clock() - m_start_time) / static_cast<double>(CLOCKS_PER_SEC));
    printf("-----------------------------------------------------------\n");    
}

void dc::TestSuite::m_print_vector(const std::vector<int>& V) const {
    printf("-----------------------------------------------------------\n");
    for (std::size_t i = 0; i < V.size(); ++i)
        printf("%d ", V[i]);
    printf("\n-----------------------------------------------------------\n");    
}

void dc::TestSuite::m_test_solution_1() {
    discrete_mathematics::chapter_3::Solution_1 solution;
    m_show_banner(1);
    m_start_timer();
    printf("Result for Solution 1 == [%d]\n", solution.compute());
    m_end_timer();
}

void dc::TestSuite::m_test_solution_2() {
    discrete_mathematics::chapter_3::Solution_2 solution;
    m_show_banner(2);
    m_start_timer();
    const int n = 199;
    printf("Result for Solution 2 == [%d]\n", solution.compute(n));
    m_end_timer();
}

void dc::TestSuite::m_test_solution_3() {
    const int n = 20;
    const int min = 1;
    const int max = 1000;
    utility::maths::Maths<int> maths;
    const std::vector<int> list = maths.random_vector(n, min, max);
    m_print_vector(list);
    discrete_mathematics::chapter_3::Solution_3 solution;
    m_show_banner(3);
    m_start_timer();
    printf("Maximum product == [%d]\n", solution.max_product(list));
    m_end_timer();
}

void dc::TestSuite::m_test_solution_4() {
    const int n = 1000000;
    discrete_mathematics::chapter_3::Solution_4 solution;
    m_show_banner(4);
    m_start_timer();
    printf("Sum of power of 2 == [%d]\n", solution.sum_power_of_2(n));
    m_end_timer();
}

void dc::TestSuite::m_test_solution_5() {
    const int n = 20;
    const int min = -100;
    const int max = 100;
    utility::maths::Maths<int> maths;
    const std::vector<int> list = maths.random_vector(n, min, max);
    m_print_vector(list);    
    discrete_mathematics::chapter_3::Solution_5 solution;
    m_show_banner(5);
    m_start_timer();
    printf("Smallest number from the list == [%d]\n", solution.smallest_number(list));
    m_end_timer();
}


void dc::TestSuite::m_test_solution_6() {
    const int n = 20;
    const int min = 1;
    const int max = 100;
    utility::maths::Maths<int> maths;
    std::vector<int> list = maths.random_vector(n, min, max);
    discrete_mathematics::chapter_3::Solution_6 solution;
    m_show_banner(6);
    m_print_vector(list);
    m_start_timer();
    solution.partial_insertion_sort(list);
    m_end_timer();
    m_print_vector(list);    
}

void dc::TestSuite::m_test_solution_7() {
    discrete_mathematics::chapter_3::Solution_7 solution;
    m_show_banner(7);
    m_start_timer();
    solution.compare();
    m_end_timer();
}

void dc::TestSuite::m_test_solution_8() {
    discrete_mathematics::chapter_3::Solution_8 solution;
    m_show_banner(8);
    m_start_timer();
    solution.compare();
    m_end_timer();
}

void dc::TestSuite::m_test_solution_9() {
    utility::maths::Maths<int> maths;
    discrete_mathematics::chapter_3::Solution_9 solution;
    m_show_banner(9);

    const int min = 1;
    const int max = 1 << 30;
    for (int i = 0; i < 20; ++i) {
        const int n = maths.random(min, max);
        printf("[%12d] has number of one [%d] bits\n", n, solution.number_of_ones(n));
    }
    
}

void dc::TestSuite::m_test_solution_10() {
    utility::maths::Maths<int> maths;
    discrete_mathematics::chapter_3::Solution_10 solution;
    m_show_banner(10);

    const int min = 1;
    const int max = 1 << 30;
    for (int i = 0; i < 20; ++i) {
        const int n = maths.random(min, max);
        printf("[%12d] has number of one [%d] bits\n", n, solution.number_of_ones(n));
    }
    
}

void dc::TestSuite::m_test_solution_11() {
    std::vector< std::vector<int> > set;

    std::vector<int> s1 ={1, 2, 3};
    std::vector<int> s2 = {4, 2};
    std::vector<int> s3 = {6, 7, 8, 9};
    std::vector<int> s4 = {12, 1};
    std::vector<int> s5 = {178, 1881};

    set.push_back(s1);
    set.push_back(s2);
    set.push_back(s3);
    set.push_back(s4);
    set.push_back(s5);    

    discrete_mathematics::chapter_3::Solution_11 solution;
    printf("Number of disjoint subsets are == [%d]\n", solution.disjoint_pairs(set));
    int key = 178;
    printf("[%d] key found in [%d] subset\n", key, solution.find(set, key));
    key = 11;
    printf("[%d] key found in [%d] subset\n", key, solution.find(set, key));    
}
