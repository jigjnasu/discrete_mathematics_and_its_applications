#include "solution_4.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_4::Solution_4() {}

dc::Solution_4::~Solution_4() {}

int dc::Solution_4::sum_power_of_2(int n) const {
    int t = 0;
    for (int i = 1; i <= n; i *= 2)
        t += i;
    return t;
}
