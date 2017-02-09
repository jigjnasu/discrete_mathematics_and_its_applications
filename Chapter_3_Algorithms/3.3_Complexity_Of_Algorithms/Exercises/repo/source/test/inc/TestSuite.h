#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_TEST_SUITE_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_TEST_SUITE_H_

#include <map>
#include <ctime>

namespace discrete_mathematics {
    namespace chapter_3 {
        class TestSuite {
        public:
            TestSuite();
            ~TestSuite();

            void run(int test_case);
            void run_all();

            typedef void (TestSuite::*ptrFunc)();

        private:
            std::clock_t m_start_time;
            std::map<int, ptrFunc> m_test_cases_dictionary;

            void m_initialize_test_cases_dictionary();
            void m_execute(ptrFunc function);
            void m_show_banner(int test_case);
            void m_start_timer();
            void m_end_timer();

            void m_test_solution_1();
            void m_test_solution_2();
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_TEST_SUITE_H_
