#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_8_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_8_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 8

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 11th, 2017
 */

#include "integer.h"

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_8 {
        public:
            Solution_8();
            ~Solution_8();

            void compare() const;

        private:
            utility::integer::Integer m_naive_power(utility::integer::Integer x,
                                                    utility::integer::Integer y) const;
            utility::integer::Integer m_divide_and_conquer_power(utility::integer::Integer x,
                                                                 utility::integer::Integer y) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_8_H_
