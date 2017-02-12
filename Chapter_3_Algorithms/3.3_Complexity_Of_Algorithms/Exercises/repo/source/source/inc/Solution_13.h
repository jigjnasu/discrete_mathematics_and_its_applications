#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_13_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_13_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 13

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#include "Integer.h"
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_13 {
        public:
            Solution_13();
            ~Solution_13();

            void polynomial(const std::vector<int>& a, int x) const;

        private:
            // a is the confitent, x = is the base, y = exponent.
            utility::integer::Integer m_compute(int a, int x, int y) const;
            void m_print(const std::vector<int>& a) const;
            void m_print_polynomial(const std::vector<int>& a) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_13_H_
