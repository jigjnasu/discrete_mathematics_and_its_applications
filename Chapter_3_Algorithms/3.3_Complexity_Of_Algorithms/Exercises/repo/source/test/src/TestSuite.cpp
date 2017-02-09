#include "TestSuite.h"
#include "AllHeaders.h"
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
