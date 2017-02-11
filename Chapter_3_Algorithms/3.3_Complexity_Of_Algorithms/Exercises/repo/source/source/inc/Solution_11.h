#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_11_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_11_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 11

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 11th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_11 {
        public:
            Solution_11();
            ~Solution_11();

            // Count the number of disjoint subsets.
            // Two sets are disjoint when two subsets doesnt have any element in common.
            // Example S1{1, 2, 3} and S2{4, 5, 6}
            int disjoint_pairs(const std::vector< std::vector<int> >& set) const;

        private:
            bool are_disjoint(const std::vector<int>& s1,
                              const std::vector<int>& s2) const;

            void m_print(const std::vector<int>& list) const;

            void m_print_set(const std::vector< std::vector<int> >& set) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_11_H_
