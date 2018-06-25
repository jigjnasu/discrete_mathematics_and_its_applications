#include "Solution_32.h"
#include <map>
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_32::Solution_32() {}

dc::Solution_32::~Solution_32() {}

void dc::Solution_32::frequency(const std::vector<int>& list) const {
    std::map<int, int> frequency_container;

    for (std::size_t i = 0; i < list.size(); ++i)
        ++frequency_container[list[i]];

    for (std::map<int, int>::const_iterator it = frequency_container.begin();
         it != frequency_container.end(); ++it) {
        if (it->second > 1)
            printf("[%5d] has [%5d] frequency\n", it->first, it->second);
    }
}
