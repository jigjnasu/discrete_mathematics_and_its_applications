/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 28
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

/*
  Input, asscending sorted vector / list.

  Algorithm 1, Linear search.
  Algorithm 2, Binary search, split input in 2 and search in the appropriate section.
  Algorithm 3, Binary search, split input in 3 and search in the appropriate section.
  Algorithm 4, Binary search, split input in 4 and search in the appropriate section.
  Algorithm 5, Binary search, split input in 5 and search in the appropriate section.
     ....       ..     ..      ..    ..    . . ..    ..    .  .      ...       ...
     ....       ..     ..      ..    ..    . . ..    ..    .  .      ...       ...
  Algorithm 10, Binary search, split input in 10 and search in the appropriate section.
 */

#include "common.h"
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <string>
#include <chrono>

int unary_search(const std::vector<int>& list, int x) {
    for (std::size_t i = 0; i < list.size(); ++i)
        if (x == list[i])
            return i + 1;
    return 0;
}

int binary_search(const std::vector<int>& list, int x) {
    int start = 0;
    int end   = list.size() - 1;

    while (start <= end) {
        if (x == list[start])
            return start + 1;
        if (x == list[end])
            return end + 1;

        const int mid = (start + end) >> 1;
        if (x == list[mid]) {
            return mid + 1;
        } else if (x < list[mid]) {
            ++start;
            end = mid - 1;
        } else {
            start = mid + 1;
            --end;
        }
    }

    return 0;
}

int n_split_search(const std::vector<int>& list, int x, int n) {
    int start = 0;
    int end   = list.size() - 1;

    while (start <= end) {
        const int split = (end - start) / n;

        for (int i = 0; i < n; ++i)
            if (x == list[start + i * split])
                return start + i * split + 1;
        if (x == list[end])
            return end + 1;

        if (x > list[start + (n - 1) * split]) {
            start += (n - 1) * split + 1;
            --end;
        } else {
            for (int i = 1; i < n; ++i) {
                if (x < list[start + i * split]) {
                    end = start + i * split - 1;
                    start += (i - 1) * split + 1;
                }
            }
        }
    }

    return 0;
}

void test_searches() {
    const int min = 1;
    const int max = 10000000;

    std::vector<int> list;
    for (int i = min; i <= max; ++i)
        list.push_back(i);

    discrete_mathematics::chapter_3::Common<int> common;
    const int x = common.random(min, max);

    using clock = std::chrono::steady_clock;
    clock::time_point start = clock::now();
    printf("--------------------------------------------------------------------\n");
    printf("Linear search x == [%d] found at [%d] location\n", x, unary_search(list, x));
    printf("--------------------------------------------------------------------\n");
    printf("Execution time  == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start).count());

    start = clock::now();
    printf("--------------------------------------------------------------------\n");
    printf("Binary search x == [%d] found at [%d] location\n", x, binary_search(list, x));
    printf("--------------------------------------------------------------------\n");
    printf("Execution time  == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start).count());

    for (int n = 3; n <= 10; ++n) {
        start = clock::now();
        printf("--------------------------------------------------------------------\n");
        printf("Search with [%d] splits, x == [%d] found at [%d] location\n", n, x, n_split_search(list, x, n));
        printf("--------------------------------------------------------------------\n");
        printf("Execution time  == [%16lf] seconds\n",
               std::chrono::duration<double>(clock::now() - start).count());
    }
}

int main() {
    test_searches();

    return 0;
}
