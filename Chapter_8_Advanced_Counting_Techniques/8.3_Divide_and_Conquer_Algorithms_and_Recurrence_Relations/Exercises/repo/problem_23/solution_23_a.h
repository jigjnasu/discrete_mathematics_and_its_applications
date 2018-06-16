/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 23
  Rakesh Kumar, cpp.rakesh@gmail.com
  15/06/2018
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_A_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_A_H_

#include <vector>

namespace discrete_mathematics {
    namespace chapter_8 {
        class Iterative {
        public:
            Iterative();
            ~Iterative();

            int Max(const std::vector<int>& list);
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_A_H_
