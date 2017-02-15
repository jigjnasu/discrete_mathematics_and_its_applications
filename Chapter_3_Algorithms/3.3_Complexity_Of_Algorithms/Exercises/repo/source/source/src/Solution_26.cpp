#include "Solution_26.h"

namespace dc = discrete_mathematics::chapter_3;

const int n = 4;

dc::Solution_26::Solution_26() {}

dc::Solution_26::~Solution_26() {}

int dc::Solution_26::search(const std::vector<int>& list, int key) const {
    return m_search(list, key, 0, list.size() - 1);
}

int dc::Solution_26::m_search(const std::vector<int>& list, int key,
                              int start, int end) const {
    while (start < end) {
        const int split = (end - start) / n;
        for (int i = 1; i < n; ++i) {
            if (key == list[start + i * split])
                return start + i * split + 1;
        }

        if (key < list[start + split]) {
            end = start + start - 1;
        } else if (key > list[start + (n - 1) * split]){
            start += (n - 1) * split + 1;
        } else {
            for (int i = 2; i < n; ++i) {
                if (key < list[start + split * i]) {
                    start += (i - 1) * split + 1;
                    end = start + split * 1 - 1;
                }
            }                
        }
    }

    return 0;
}
