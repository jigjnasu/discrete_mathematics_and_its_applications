#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_16_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_16_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 16

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 13th, 2017
 */

#include <string>
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_16 {
        public:
            Solution_16();
            ~Solution_16();

            void compute() const;

        private:
            std::size_t m_base;

            std::string m_f_a() const;
            std::size_t m_f_b() const;
            double m_f_c() const;
            double m_f_d() const;
            double m_f_e() const;
            double m_f_f() const;
            double m_f_g() const;
            double m_f_h() const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_16_H_
