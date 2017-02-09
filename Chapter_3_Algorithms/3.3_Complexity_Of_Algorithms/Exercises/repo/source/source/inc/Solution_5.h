#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_5_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_5_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 5

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

// From loop, n - 1, comparissions
// From statement, n - 1 comparissions
// Total Cost, 2 n - 2 comparissions
// Total Cost = 2 (n - 1)
// Time complexity of this function is always O(n).

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_5 {
        public:
            Solution_5();
            ~Solution_5();

            int smallest_number(const std::vector<int>& list) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_5_H_
