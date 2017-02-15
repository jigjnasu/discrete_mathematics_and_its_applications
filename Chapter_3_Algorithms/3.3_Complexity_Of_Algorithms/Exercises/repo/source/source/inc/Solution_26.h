#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_26_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_26_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 26

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 16th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_26 {
        public:
            Solution_26();
            ~Solution_26();

            int search(const std::vector<int>& list, int key) const;

        private:
            int m_search(const std::vector<int>& list, int key,
                         int start, int end) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_26_H_
