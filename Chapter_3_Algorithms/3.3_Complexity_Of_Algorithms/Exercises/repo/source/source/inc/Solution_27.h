#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_27_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_27_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 27

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 16th, 2017
 */

#include <map>
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_27 {
        public:
            Solution_27();
            ~Solution_27();

            std::map<int, int> mode(const std::vector<int>& list) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_27_H_
