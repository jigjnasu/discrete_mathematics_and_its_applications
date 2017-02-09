#include "Solution_1.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_1::Solution_1() {}

dc::Solution_1::~Solution_1() {}

int dc::Solution_1::compute() const {
    int t = 0;
    for (int i = 1; i <= 3; ++i)
        for (int j = 1; j <= 4; ++j)
            t += (i * j);
    return t;    
}
