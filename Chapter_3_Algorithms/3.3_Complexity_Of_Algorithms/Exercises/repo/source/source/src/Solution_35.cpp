#include "Solution_35.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_35::Solution_35() {}

dc::Solution_35::~Solution_35() {}

void dc::Solution_35::sort(std::vector<int>& list) const {
    for (std::size_t i = 1; i < list.size(); ++i) {
        int j = i;
        while (j > 0 && list[j - 1] > list[j]) {
            m_swap(list[j - 1], list[j]);
            --j;
        }
    }
}

void dc::Solution_35::m_swap(int& a, int& b) const {
    a ^= b;
    b ^= a;
    a ^= b;
}
