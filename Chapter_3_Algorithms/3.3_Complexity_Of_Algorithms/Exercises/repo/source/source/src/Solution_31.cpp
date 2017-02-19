#include "Solution_31.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_31::Solution_31() {}

dc::Solution_31::~Solution_31() {}

void dc::Solution_31::less_than_next(const std::vector<int>& list) const {
    for (std::size_t i = 0; i < list.size() - 1; ++i) {
        if (list[i] < list[i + 1]) {
            printf("First term [%d] < [%d]\n", list[i], list[i + 1]);
            return;
        }
    }

    printf("There is no term which is less than it's preceding term\n");
}
