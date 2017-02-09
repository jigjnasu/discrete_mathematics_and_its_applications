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

void dc::TestSuite::m_test_solution_1() {
    discrete_mathematics::chapter_3::Solution_1 solution;
    printf("Result for Solution 1 == [%d]\n", solution.compute());
}

void dc::TestSuite::m_test_solution_2() {
    discrete_mathematics::chapter_3::Solution_2 solution;
    const int n = 190;
    printf("Result for Solution 2 == [%d]\n", solution.compute(n));
}
