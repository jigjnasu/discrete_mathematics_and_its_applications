#include "solution_28.h"
#include <stack>
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_28::Solution_28() {}

dc::Solution_28::~Solution_28() {}

std::map<int, int> dc::Solution_28::mode(const std::vector<int>& list) const {
    std::map<int, int> modes;
    int max_frequency = 0;

    std::size_t i = 0;
    while (i < list.size()) {
        int frequency = 1;
        while (list[i] == list[i + frequency])
            ++frequency;

        if (frequency >= max_frequency) {
            max_frequency = frequency;
            modes.insert(std::make_pair(list[i], frequency));
        }

        i = i + frequency;
    }

    std::map<int, int> result;
    for (std::map<int, int>::const_reverse_iterator it = modes.rbegin();
         it != modes.rend(); ++it)
         if (max_frequency == it->second)
             result.insert(std::make_pair(it->first, it->second));
         else
             break;

    return result;
}
