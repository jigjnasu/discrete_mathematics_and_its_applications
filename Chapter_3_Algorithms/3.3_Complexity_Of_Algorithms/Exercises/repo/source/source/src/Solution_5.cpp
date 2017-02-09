#include "Solution_5.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_5::Solution_5() {}

dc::Solution_5::~Solution_5() {}

int dc::Solution_5::smallest_number(const std::vector<int>& list) const {
    int min = list[0];
    for (std::size_t i = 1; i < list.size(); ++i)
        if (list[i] < min)
            min = list[i];
    return min;
}
