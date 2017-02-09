#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_2_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_2_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 2

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

// From first loop, n comparrions
// From second loop, n comparrions
// From statement, 2 additions
// Total Cost, n ^ 2 comparrisions, 2 *(n ^ 2)
// Total Cost = 3 * (n ^ 2)
// Time complexity of this function is always O(n ^ 2).

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_2 {
        public:
            Solution_2();
            ~Solution_2();

            int compute(int n) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_2_H_


