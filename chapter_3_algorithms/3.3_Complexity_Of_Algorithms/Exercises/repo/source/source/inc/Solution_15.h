#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_15_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_15_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 15

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#include <string>
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_15 {
        public:
            Solution_15();
            ~Solution_15();

            void compute() const;

        private:
            int m_base;
            std::string m_fn_a() const;
            double m_fn_b() const;
            double m_fn_c() const;
            double m_fn_d() const;
            double m_fn_e() const;
            int m_fn_f() const;
            int m_factorial(int n) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_15_H_
