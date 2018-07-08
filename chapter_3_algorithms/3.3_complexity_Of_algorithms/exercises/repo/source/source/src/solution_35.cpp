#include "solution_35.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_35::Solution_35() {}

dc::Solution_35::~Solution_35() {}

void dc::Solution_35::sort(std::vector<int>& list) const {
    for (std::size_t i = 1; i < list.size(); ++i) {
        const int pos = m_pos(list, i, list[i]);
        for (int j = i; j > pos; --j)
            m_swap(list[j], list[j - 1]);
    }
}

int dc::Solution_35::m_pos(const std::vector<int>& list, int end, int key) const {
    int start = 0;

    while (start <= end) {
        const int mid = (start + end) >> 1;

        if (key == list[mid])
            return mid;
        else if (key < list[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    return start;
}

void dc::Solution_35::m_swap(int& a, int& b) const {
    a ^= b;
    b ^= a;
    a ^= b;
}
