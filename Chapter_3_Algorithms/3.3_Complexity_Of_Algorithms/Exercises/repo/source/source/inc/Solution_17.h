#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_17_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_17_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 17

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 13th, 2017
 */

#include <string>
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_17 {
        public:
            Solution_17();
            ~Solution_17();

            void compute() const;

        private:
            std::size_t m_base;

            std::string m_f_a() const;
            std::string m_f_b() const;
            std::string m_f_c() const;
            std::size_t m_f_d() const;
            double m_f_e() const;
            double m_f_f() const;
            double m_f_g() const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_17_H_
