/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 23
  Rakesh Kumar, cpp.rakesh@gmail.com
  15/06/2018
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_C_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_C_H_

#include <vector>

namespace discrete_mathematics {
    namespace chapter_8 {
        class DivideAndConquer {
        public:
            DivideAndConquer();
            ~DivideAndConquer();

            int Max(const std::vector<int>& list);

        private:
            int m_max(const std::vector<int>& list, int s, int e);
            int m_cross(const std::vector<int>& list, int s, int m, int e);
        };
    };
};

#endif //DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_C_H_
