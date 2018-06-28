#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_10_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_10_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 10

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 11th, 2017
 */

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_10 {
        public:
            Solution_10();
            ~Solution_10();

            // Let's try to count out the number of ones in an int.
            // Time complexity O(n)
            int number_of_ones(int n) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_10_H_
