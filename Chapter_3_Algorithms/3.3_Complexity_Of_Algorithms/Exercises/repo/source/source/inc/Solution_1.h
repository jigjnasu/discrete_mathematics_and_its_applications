#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_1_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_1_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 1

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

// From first loop, 3 comparrions
// From second loop, 4 comparrions
// From statement, 1 addition and 1 multiplication.
// Total Cost, 12 comparrisions, 12 additions and 12 multiplications
// Time complexity of this function is always O(1).
// Because regardless of n, or any thing it will always have
// same cost and same instruction set every it will execute.

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_1 {
        public:
            Solution_1();
            ~Solution_1();

            int compute() const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_1_H_
