#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_35_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_35_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 35

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 19th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_35 {
        public:
            Solution_35();
            ~Solution_35();

            void sort(std::vector<int>& list) const;

        private:
            int m_pos(const std::vector<int>& list, int end, int key) const;
            void m_swap(int& a, int& b) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_35_H_
