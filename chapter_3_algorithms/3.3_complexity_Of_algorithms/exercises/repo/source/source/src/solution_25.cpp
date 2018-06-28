#include "Solution_25.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

const int n = 3;

dc::Solution_25::Solution_25() {}

dc::Solution_25::~Solution_25() {}

int dc::Solution_25::search(const std::vector<int>& list, int key) const {
    int start = 0;
    int end = list.size() - 1;
    
    while (start <= end) {
        const int split = (end - start) / 3;
        for (int i = 0; i < n; ++i)
            if (key == list[start + i * split])
                return start + i * split;

        if (key == list[end])
            return end + 1;

        if (key > list[start + (n - 1) * split]) {
            --end;
            start += (n - 1) * split + 1;
        } else {
            for (int i = 1; i < n; ++i) {
                if (key < list[start + i * split]) {
                    end = start + i * split - 1;
                    start += i * split + 1;
                }
            }
        }
    }
    
    return 0;
}
