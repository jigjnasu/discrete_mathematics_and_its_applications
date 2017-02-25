#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_42_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_42_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 42

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 26th, 2017
 */

namespace discrete_mathematics {
    namespace chapter_3 {
        class Solution_42 {
        public:
            Solution_42();
            ~Solution_42();

            void upper_triangular() const;

        private:
            template <int size>
            void m_build_matrix(int (&matrix)[size][size]) const;

            template <int size>
                void m_matrix_multiply(const int (&A)[size][size],
                                       const int (&B)[size][size],
                                       int (&C)[size][size]) const;

            template <int size>
            void m_upper_multiply(const int (&A)[size][size],
                                  const int (&B)[size][size],
                                  int (&C)[size][size]) const;

            template <int size>
            void m_print(const int (&matrix)[size][size]) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_42_H_
