#include "solution_12.h"
#include "maths.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_12::Solution_12() {}

dc::Solution_12::~Solution_12() {}

void dc::Solution_12::compute_matrix(const std::vector<int>& data) const {
    const std::size_t n = 10;
    int matrix[n][n] = {0};
    m_fill_matrix(matrix);
    utility::maths::Maths<int> maths;

    printf("-------------------------------- Input ----------------------------\n");
    m_print(data);
    m_print_matrix<n>(matrix);

    for (std::size_t i = 0; i < n; ++i)
        for (std::size_t j = i + 1; j < n; ++j)
            for (std::size_t k = i + 1; k < j; ++k)
                matrix[i][j] = maths.min(matrix[i][j], data[k]);

    printf("----------------------------- Output Matrix -----------------------\n");
    m_print_matrix<n>(matrix);
}

template <std::size_t size>
void dc::Solution_12::m_fill_matrix(int (&matrix)[size][size]) const {
    utility::maths::Maths<int> maths;

    for (std::size_t r = 0; r < size; ++r)
        for (std::size_t c = 0; c < size; ++c)
            matrix[r][c] = maths.random(-100, 100);
}

void dc::Solution_12::m_print(const std::vector<int>& data) const {
    for (std::size_t i = 0; i < data.size(); ++i)
        printf("%d ", data[i]);
    printf("\n");
}

template <std::size_t size>
void dc::Solution_12::m_print_matrix(int matrix[size][size]) const {
    for (std::size_t r = 0; r < size; ++r) {
        for (std::size_t c = 0; c < size; ++c) {
            printf("%4d ", matrix[r][c]);
        }
        printf("\n");
    }
}
