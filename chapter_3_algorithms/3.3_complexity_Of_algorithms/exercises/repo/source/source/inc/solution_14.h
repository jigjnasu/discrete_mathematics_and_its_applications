#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_14_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_14_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 14

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#include "integer.h"
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_14 {
        public:
            Solution_14();
            ~Solution_14();

            void polynomial(const std::vector<int>& a, int x) const;

        private:
            // a is the confitent, x = is the base, y = exponent.
            utility::integer::Integer m_compute(const std::vector<int>& a, int x) const;
            void m_print(const std::vector<int>& a) const;
            void m_print_polynomial(const std::vector<int>& a) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_14_H_
