#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_7_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_7_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 7

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 11th, 2017
 */

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_7 {
        public:
            Solution_7();
            ~Solution_7();

            void compare() const;

        private:
            void m_print(const std::vector<int>& data) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_7_H_
