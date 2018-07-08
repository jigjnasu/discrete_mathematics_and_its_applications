#include "solution_6.h"

/*
  As we just need to limit the sorting to first 4 elements.
  The Time complexity will not depend on the size of the vector passed to the function.
  Therefore, the time limit will always be O(1).
  From for loop, 4 comparissions
  From while loop, in worst case equal to 4 comparissions
  Total Cost, 4 * 4 comparissions
  Total Cost = 16 comparissions
  Time complexity of this function is always O(1). Because it will always be constant
  regardless of the size of the vector passed to it.
*/

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_6::Solution_6() {}

dc::Solution_6::~Solution_6() {}

void dc::Solution_6::partial_insertion_sort(std::vector<int>& list) const {
    std::size_t limit = list.size() >= 4 ? 4 : list.size();

    for (std::size_t i = 0; i < limit; ++i) {
        int j = i;
        while (j > 0 && list[j - 1] > list[j]) {
            m_swap(list[j], list[j - 1]);
            --j;
        }
    }
}

void dc::Solution_6::m_swap(int& a, int& b) const {
    a ^= b;
    b ^= a;
    a ^= b;
}
