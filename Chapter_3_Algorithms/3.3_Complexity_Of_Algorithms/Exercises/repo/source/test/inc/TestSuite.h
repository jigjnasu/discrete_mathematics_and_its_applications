#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_TEST_SUITE_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_TEST_SUITE_H_

#include <map>
#include <vector>
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

            int m_random(int min, int max) const;
            std::vector<int> m_build_vector(int n, int min, int max) const;
            void m_print_vector(const std::vector<int>& V) const;
            
            void m_test_solution_1();
            void m_test_solution_2();
            void m_test_solution_3();
            void m_test_solution_4();
            void m_test_solution_5();            
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_TEST_SUITE_H_
