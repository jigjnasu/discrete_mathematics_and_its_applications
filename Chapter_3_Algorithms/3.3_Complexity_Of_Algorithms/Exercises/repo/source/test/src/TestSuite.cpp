#include "TestSuite.h"
#include "AllHeaders.h"
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

int dc::TestSuite::m_random(int min, int max) const {
    return min + rand() % (max - min) + 1;
}

std::vector<int> dc::TestSuite::m_build_vector(int n, int min, int max) const {
    std::vector<int> list;
    for (int i = 0; i < n; ++i)
        list.push_back(m_random(min, max));

    return list;
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
    const int n = 50;
    const int min = 1;
    const int max = 1000;
    const std::vector<int> list = m_build_vector(n, min, max);
    m_print_vector(list);
    discrete_mathematics::chapter_3::Solution_3 solution;
    m_show_banner(3);
    m_start_timer();
    printf("Maximum product == [%d]\n", solution.max_product(list));
    m_end_timer();
}
