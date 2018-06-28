#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_6_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_6_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 6

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_6 {
        public:
            Solution_6();
            ~Solution_6();

            void partial_insertion_sort(std::vector<int>& list) const;

        private:
            void m_swap(int& a, int& b) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_6_H_
