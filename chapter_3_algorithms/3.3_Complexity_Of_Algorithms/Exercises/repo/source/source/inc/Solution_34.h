#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_34_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_34_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 34

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 19th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_34 {
        public:
            Solution_34();
            ~Solution_34();

            void sort(std::vector<int>& list) const;

        private:
            std::size_t m_minimum(const std::vector<int>& list, std::size_t start_pos) const;
            void m_swap(int& a, int& b) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_34_H_
