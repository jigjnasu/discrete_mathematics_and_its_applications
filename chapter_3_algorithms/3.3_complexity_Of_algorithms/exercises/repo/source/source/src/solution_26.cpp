#include "solution_26.h"

namespace dc = discrete_mathematics::chapter_3;

const int n = 4;

dc::Solution_26::Solution_26() {}

dc::Solution_26::~Solution_26() {}

int dc::Solution_26::search(const std::vector<int>& list, int key) const {
    int start = 0;
    int end = list.size() - 1;

    while (start <= end) {
        const int split = (end - start) / n;

        for (int i = 0; i < n; ++i)
            if (key == list[start + i * split])
                return start + i * split + 1;
        if (key == list[end])
            return end + 1;

        if (key > list[start + (n - 1) * split]) {
            --end;
            start += (n - 1) * split + 1;
        } else {
            for (int i = 1; i < n; ++i) {
                if (key < list[start + i * split]) {
                    end = start + i * split - 1;
                    start += (i - 1) * split + 1;
                }
            }
        }
    }

    return 0;
}
