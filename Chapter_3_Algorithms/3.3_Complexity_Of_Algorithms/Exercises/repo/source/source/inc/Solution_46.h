#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_46_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_46_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 46

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 26th, 2017
 */

#include <string>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_46 {
        public:
            Solution_46();
            ~Solution_46();

            int pos(const std::string& str, const std::string& target) const;

        private:
            bool m_is_match(const std::string& str, const std::string& target,
                            std::size_t pos) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_46_H_
