#include "Solution_10.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_10::Solution_10() {}

dc::Solution_10::~Solution_10() {}

int dc::Solution_10::number_of_ones(int n) const {
    int counter = 0;

    while (n) {
        n &= (n - 1);
        ++counter;
    }

    return counter;
}
