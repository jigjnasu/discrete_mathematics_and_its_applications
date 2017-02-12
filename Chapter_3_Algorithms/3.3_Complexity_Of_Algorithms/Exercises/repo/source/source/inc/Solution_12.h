#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_12_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_12_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 12

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_12 {
        public:
            Solution_12();
            ~Solution_12();

            void compute_matrix(const std::vector<int>& data) const;

        private:
            void m_print(const std::vector<int>& data) const;

            template <std::size_t size>
            void m_print_matrix(int matrix[size][size]) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_12_H_
