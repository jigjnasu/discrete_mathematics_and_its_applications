#include "TestSuite.h"
#include "AllHeaders.h"
#include "Maths.h"
#include "MergeSort.h"
#include <string>
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
    m_test_cases_dictionary[1]  = &TestSuite::m_test_solution_1;
    m_test_cases_dictionary[2]  = &TestSuite::m_test_solution_2;
    m_test_cases_dictionary[3]  = &TestSuite::m_test_solution_3;
    m_test_cases_dictionary[4]  = &TestSuite::m_test_solution_4;
    m_test_cases_dictionary[5]  = &TestSuite::m_test_solution_5;
    m_test_cases_dictionary[6]  = &TestSuite::m_test_solution_6;
    m_test_cases_dictionary[7]  = &TestSuite::m_test_solution_7;
    m_test_cases_dictionary[8]  = &TestSuite::m_test_solution_8;
    m_test_cases_dictionary[9]  = &TestSuite::m_test_solution_9;
    m_test_cases_dictionary[10] = &TestSuite::m_test_solution_10;
    m_test_cases_dictionary[11] = &TestSuite::m_test_solution_11;
    m_test_cases_dictionary[12] = &TestSuite::m_test_solution_12;
    m_test_cases_dictionary[13] = &TestSuite::m_test_solution_13;
    m_test_cases_dictionary[14] = &TestSuite::m_test_solution_14;
    m_test_cases_dictionary[15] = &TestSuite::m_test_solution_15;
    m_test_cases_dictionary[16] = &TestSuite::m_test_solution_16;
    m_test_cases_dictionary[17] = &TestSuite::m_test_solution_17;
    m_test_cases_dictionary[25] = &TestSuite::m_test_solution_25;
    m_test_cases_dictionary[26] = &TestSuite::m_test_solution_26;
    m_test_cases_dictionary[27] = &TestSuite::m_test_solution_27;
    m_test_cases_dictionary[28] = &TestSuite::m_test_solution_28;
    m_test_cases_dictionary[29] = &TestSuite::m_test_solution_29;
    m_test_cases_dictionary[30] = &TestSuite::m_test_solution_30;
    m_test_cases_dictionary[31] = &TestSuite::m_test_solution_31;
    m_test_cases_dictionary[32] = &TestSuite::m_test_solution_32;
    m_test_cases_dictionary[33] = &TestSuite::m_test_solution_33;
    m_test_cases_dictionary[34] = &TestSuite::m_test_solution_34;
    m_test_cases_dictionary[35] = &TestSuite::m_test_solution_35;
    m_test_cases_dictionary[36] = &TestSuite::m_test_solution_36;
    m_test_cases_dictionary[42] = &TestSuite::m_test_solution_42;    
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

void dc::TestSuite::m_test_solution_12() {
    std::vector<int> list;
    for (int i = 0; i < 20; ++i)
        list.push_back(i + 1);

    discrete_mathematics::chapter_3::Solution_12 solution;
    solution.compute_matrix(list);
}

void dc::TestSuite::m_test_solution_13() {
    const int min = 1;
    const int max = 100;
    const int x = 3;
    utility::maths::Maths<int> maths;
    
    std::vector<int> list;
    for (int i = 0; i < 10; ++i)
        list.push_back(maths.random(min, max));

    discrete_mathematics::chapter_3::Solution_13 solution;
    solution.polynomial(list, x);
}

void dc::TestSuite::m_test_solution_14() {
    const int min = 1;
    const int max = 100;
    const int x = 3;
    utility::maths::Maths<int> maths;

    std::vector<int> list;
    for (int i = 0; i < 10; ++i)
        list.push_back(maths.random(min, max));

    discrete_mathematics::chapter_3::Solution_14 solution;
    solution.polynomial(list, x);
}

void dc::TestSuite::m_test_solution_15() {
    discrete_mathematics::chapter_3::Solution_15 solution;
    solution.compute();
}

void dc::TestSuite::m_test_solution_16() {
    discrete_mathematics::chapter_3::Solution_16 solution;
    solution.compute();
}

void dc::TestSuite::m_test_solution_17() {
    discrete_mathematics::chapter_3::Solution_17 solution;
    solution.compute();
}

void dc::TestSuite::m_test_solution_25() {
    utility::maths::Maths<int> maths;
    utility::algorithms::sort::MergeSort<int> sort;
    const int n = 50;
    const int min = 1;
    const int max = 100;
    
    std::vector<int> list = maths.random_vector(n, min, max);
    printf("-------------------------------------- List of Random number -------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n-------------------------------------- List of Random number -------------------------\n");

    sort.sort(list);
    printf("----------------------------------------- Sorted List  --------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------------------- Sorted List  --------------------------------\n");    

    const int key = maths.random(min, max);
    discrete_mathematics::chapter_3::Solution_25 solution;
    printf("key == [%d] found at [%d] location\n", key, solution.search(list, key));
}

void dc::TestSuite::m_test_solution_26() {
    utility::maths::Maths<int> maths;
    utility::algorithms::sort::MergeSort<int> sort;
    const int n = 50;
    const int min = 1;
    const int max = 100;
    
    std::vector<int> list = maths.random_vector(n, min, max);
    printf("-------------------------------------- List of Random number -------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n-------------------------------------- List of Random number -------------------------\n");

    sort.sort(list);
    printf("----------------------------------------- Sorted List  --------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------------------- Sorted List  --------------------------------\n");    

    const int key = maths.random(min, max);
    discrete_mathematics::chapter_3::Solution_26 solution;
    printf("key == [%d] found at [%d] location\n", key, solution.search(list, key));
}

void dc::TestSuite::m_test_solution_27() {
    utility::maths::Maths<int> maths;
    utility::algorithms::sort::MergeSort<int> sort;

    const int n = 100;
    const int min = 1;
    const int max = 100;

    std::vector<int> list = maths.random_vector(n, min, max);
    printf("-------------------------------------- List of Random number -------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n-------------------------------------- List of Random number -------------------------\n");

    sort.sort(list);

    printf("----------------------------------------- Sorted List  --------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------------------- Sorted List  --------------------------------\n");    

    discrete_mathematics::chapter_3::Solution_27 solution;
    const std::map<int, int> modes = solution.mode(list);
    printf("------------------------------- Highest frequency emement ------------------------------\n");
    printf("[%d] has [%d] frequency\n", modes.begin()->first, modes.begin()->second);
    printf("------------------------------- Highest frequency emements ------------------------------\n");
}

void dc::TestSuite::m_test_solution_28() {
    utility::maths::Maths<int> maths;
    utility::algorithms::sort::MergeSort<int> sort;

    const int n = 100;
    const int min = 1;
    const int max = 100;

    std::vector<int> list = maths.random_vector(n, min, max);
    printf("-------------------------------------- List of Random number -------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n-------------------------------------- List of Random number -------------------------\n");

    sort.sort(list);

    printf("----------------------------------------- Sorted List  --------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------------------- Sorted List  --------------------------------\n");    

    discrete_mathematics::chapter_3::Solution_27 solution;
    const std::map<int, int> modes = solution.mode(list);

    printf("------------------------------- Highest frequency emements ------------------------------\n");
    for (std::map<int, int>::const_iterator it = modes.begin();
         it != modes.end(); ++it)
        printf("[%5d] has [%5d] frequency\n", it->first, it->second);
    printf("------------------------------- Highest frequency emements ------------------------------\n");
}

void dc::TestSuite::m_test_solution_29() {
    utility::maths::Maths<int> maths;
    int n = 100;
    int min = 1;
    int max = 100;

    const std::vector<int> list = maths.random_vector(n, min, max);
    printf("------------------------------------------------ List ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n------------------------------------------------ List ----------------------------------\n");

    discrete_mathematics::chapter_3::Solution_29 solution;
    solution.previous_sum(list);
}


void dc::TestSuite::m_test_solution_30() {
    utility::maths::Maths<int> maths;
    int n = 100;
    int min = 1;
    int max = 100;

    const std::vector<int> list = maths.random_vector(n, min, max);
    printf("------------------------------------------------ List ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n------------------------------------------------ List ----------------------------------\n");

    discrete_mathematics::chapter_3::Solution_30 solution;
    solution.previous_sum(list);
}


void dc::TestSuite::m_test_solution_31() {
    utility::maths::Maths<int> maths;
    int n = 100;
    int min = 1;
    int max = 100;

    const std::vector<int> list = maths.random_vector(n, min, max);
    printf("------------------------------------------------ List ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n------------------------------------------------ List ----------------------------------\n");

    discrete_mathematics::chapter_3::Solution_31 solution;
    solution.less_than_next(list);
}

void dc::TestSuite::m_test_solution_32() {
    utility::maths::Maths<int> maths;
    int n = 100;
    int min = 1;
    int max = 100;

    const std::vector<int> list = maths.random_vector(n, min, max);
    printf("------------------------------------------------ List ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n------------------------------------------------ List ----------------------------------\n");

    discrete_mathematics::chapter_3::Solution_32 solution;
    solution.frequency(list);
}


void dc::TestSuite::m_test_solution_33() {
    discrete_mathematics::chapter_3::Solution_33 solution;
    const std::string input1 = "0.5 is my janu";
    if (solution.is_palindrome(input1))
        printf("[%s] is a palindrome\n", input1.c_str());
    else
        printf("[%s] is a NOT palindrome\n", input1.c_str());

    const std::string input2 = "madam";
    if (solution.is_palindrome(input2))
        printf("[%s] is a palindrome\n", input2.c_str());
    else
        printf("[%s] is a NOT palindrome\n", input2.c_str());

    const std::string input3 = "hansraj model school";
    if (solution.is_palindrome(input3))
        printf("[%s] is a palindrome\n", input3.c_str());
    else
        printf("[%s] is a NOT palindrome\n", input3.c_str());        
}

void dc::TestSuite::m_test_solution_34() {
    utility::maths::Maths<int> maths;
    int n = 100;
    int min = 1;
    int max = 100;

    std::vector<int> list = maths.random_vector(n, min, max);
    printf("----------------------------- Before Selection Sort ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------- Before Selection Sort ----------------------------------\n");

    discrete_mathematics::chapter_3::Solution_34 solution;
    solution.sort(list);

    printf("----------------------------- After Selection Sort ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------- After Selection Sort ----------------------------------\n");    
}

void dc::TestSuite::m_test_solution_35() {
    utility::maths::Maths<int> maths;
    int n = 100;
    int min = 1;
    int max = 100;

    std::vector<int> list = maths.random_vector(n, min, max);
    printf("----------------------------- Before Binary Insertion Sort ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------- Before Binary Insertion Sort ----------------------------------\n");

    discrete_mathematics::chapter_3::Solution_35 solution;
    solution.sort(list);

    printf("----------------------------- After Binary Insertion Sort ----------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------- After Binary Insertion Sort ----------------------------------\n");
}

void dc::TestSuite::m_test_solution_36() {
    const int money = 290;
    discrete_mathematics::chapter_3::Solution_36 solution;

    printf("Change for [%d] as follows:--\n", money);
    const std::map<int, int> change = solution.change(money);
    for (std::map<int, int>::const_iterator it = change.begin();
         it != change.end(); ++it)
        printf("[%5d] == [%5d] coins == [%5d]\n", it->first, it->second, it->first * it->second);
}

void dc::TestSuite::m_test_solution_42() {
    discrete_mathematics::chapter_3::Solution_42 solution;
    solution.upper_triangular();
}
