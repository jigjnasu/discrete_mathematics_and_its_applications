#include "Solution_12.h"
#include "Maths.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_12::Solution_12() {}

dc::Solution_12::~Solution_12() {}

void dc::Solution_12::compute_matrix(const std::vector<int>& data) const {
    int matrix[10][10] = {0};
    utility::maths::Maths<int> maths;

    printf("-------------------------------- Input ----------------------------\n");
    m_print(data);

    for (std::size_t i = 0; i < data.size(); ++i) {
        for (std::size_t j = i + 1; j < data.size(); ++j) {
            for (std::size_t k = i + 1; k <= j; ++k) {
                       maths.min(matrix[i][j], data[k]));
                matrix[i][j] = maths.min(matrix[i][j], data[k]);
            }
        }
    }

    printf("----------------------------- Output Matrix -----------------------\n");
    m_print_matrix<10>(matrix);
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
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }
}
