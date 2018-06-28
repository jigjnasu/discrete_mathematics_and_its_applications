#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_4_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_4_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 4

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

// From first loop, lg n times
// From statement, addition lg n times
// Total Cost, addition lg n times, lg n times comparrison
// Total Cost = 2 lg n 
// Time complexity of this function is always O(lg n).

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_4 {
        public:
            Solution_4();
            ~Solution_4();

            int sum_power_of_2(int n) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_4_H_


