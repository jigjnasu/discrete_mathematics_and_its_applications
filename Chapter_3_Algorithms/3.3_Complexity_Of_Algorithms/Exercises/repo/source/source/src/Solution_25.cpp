#include "Solution_25.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_25::Solution_25() {}

dc::Solution_25::~Solution_25() {}

int dc::Solution_25::search(const std::vector<int>& list, int key) const {
    return m_search(list, key, 0, list.size() - 1);
}

int dc::Solution_25::m_search(const std::vector<int>& list, int key,
                              int start, int end) const {
    while (start < end) {
        const int split = (end - start) / 3;
        if (key == list[start + split])
            return start + split + 1;
        if (key == list[start + 2 * split])
            return start + 2 * split + 1;

        if (key < list[start + split]) {
            end = start + split - 1;
        } else if (key < list[start + 2 * split]) {
            start += split + 1;
            end = start + 2 * split - 1;
        } else {
            start += 2 * split + 1;
        }
    }

    return 0;
}
