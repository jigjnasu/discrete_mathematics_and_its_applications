#include "solution_2.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_2::Solution_2() {}

dc::Solution_2::~Solution_2() {}

int dc::Solution_2::compute(int n) const {
    int t = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            t += i + j;
    return t;
}
