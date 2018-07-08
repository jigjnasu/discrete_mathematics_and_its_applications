#include "solution_42.h"
#include <cstdio>

namespace ds = discrete_mathematics::chapter_3;

ds::Solution_42::Solution_42() {}

ds::Solution_42::~Solution_42() {}

void ds::Solution_42::upper_triangular() const {
    const int size = 5;

    int matrix[size][size] = {0};
    m_build_matrix<size>(matrix);
    m_print<size>(matrix);

    int result1[size][size] = {0};
    int result2[size][size] = {0};
    m_matrix_multiply<size>(matrix, matrix, result1);
    m_upper_multiply<size>(matrix, matrix, result2);

    printf("-------------------------- Normal multiplication --------------------\n");
    m_print<size>(result1);
    printf("---------------- Upper Trinagular multiplication --------------------\n");
    m_print<size>(result2);
}

template <int size>
void ds::Solution_42::m_build_matrix(int (&matrix)[size][size]) const {
    int counter = 1;
    for (int r = 0; r < size; ++r)
        for (int c = 0; c < size; ++c)
            if (r <= c)
                matrix[r][c] = counter++;
}

template <int size>
void ds::Solution_42::m_matrix_multiply(const int (&A)[size][size],
                                        const int (&B)[size][size],
                                        int (&C)[size][size]) const {
    for (int r = 0; r < size; ++r)
        for (int c = 0; c < size; ++c)
            for (int k = 0; k < size; ++k)
                C[r][c] += A[r][k] * B[k][c];
}

template <int size>
void ds::Solution_42::m_upper_multiply(const int (&A)[size][size],
                                       const int (&B)[size][size],
                                       int (&C)[size][size]) const {
    for (int r = 0; r < size; ++r)
        for (int c = 0; c < size; ++c)
            for (int k = 0; k <= c; ++k)
                C[r][c] += A[r][k] * B[k][c];
}

template <int size>
void ds::Solution_42::m_print(const int (&matrix)[size][size]) const {
    printf("------------------------------------------------------\n");
    for (int r = 0; r < size; ++r) {
        for (int c = 0; c < size; ++c)
            printf("%5d ", matrix[r][c]);
        printf("\n");
    }
    printf("------------------------------------------------------\n");
}
