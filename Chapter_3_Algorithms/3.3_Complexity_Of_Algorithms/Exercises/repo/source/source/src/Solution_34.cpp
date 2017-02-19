#include "Solution_34.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_34::Solution_34() {}

dc::Solution_34::~Solution_34() {}

void dc::Solution_34::sort(std::vector<int>& list) const {
    for (std::size_t i = 0; i < list.size() - 1; ++i) {
        const std::size_t pos = m_minimum(list, i);
        if (pos != i)
            m_swap(list[pos], list[i]);
    }
}

std::size_t dc::Solution_34::m_minimum(const std::vector<int>& list, std::size_t start_pos) const {
    int min = list[start_pos];
    int min_pos = start_pos;

    for (std::size_t i = start_pos + 1; i < list.size(); ++i) {
        if (list[i] < min) {
            min = list[i];
            min_pos = i;
        }            
    }

    return min_pos;
}

void dc::Solution_34::m_swap(int& a, int& b) const {
    a ^= b;
    b ^= a;
    a ^= b;
}
