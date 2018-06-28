#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_9_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_9_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 9

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 11th, 2017
 */

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_9 {
        public:
            Solution_9();
            ~Solution_9();

            // Let's try to count out the number of ones in an int.
            // Time complexity O(n)
            int number_of_ones(int n) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_9_H_
