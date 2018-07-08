#include "solution_27.h"
#include <stack>
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_27::Solution_27() {}

dc::Solution_27::~Solution_27() {}

std::map<int, int> dc::Solution_27::mode(const std::vector<int>& list) const {
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

        i += frequency;
    }

    std::map<int, int> result;
    result.insert(std::make_pair(modes.rbegin()->first, modes.rbegin()->second));
    return result;
}
