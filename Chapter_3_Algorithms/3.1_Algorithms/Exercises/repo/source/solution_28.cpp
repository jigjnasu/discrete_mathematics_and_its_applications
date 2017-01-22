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
#include <ctime>

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
        const int mid = (start + end) >> 1;
        if (x == list[mid])
            return mid + 1;
        else if (x > list[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return 0;
}

int n_split_search(const std::vector<int>& list, int x, int splits) {
    int start = 0;
    int end   = list.size() - 1; 

    while (start <= end) {
        const int factor = (end - start) / splits;
        // Check with all splits is there x is there
        // If no find in which split x is and
        // set start and end

        for (int i = 1;  i < splits; ++i) {
            if (x == list[i * factor + start])
                return i * factor + start + 1;
        }

        if (x < list[factor + start]) {
            end = factor + start - 1;
        } else if (x > list[(splits - 1) * factor + start]) {
            start = (splits - 1) * factor + start + 1;
        } else {
            for (int i = 1; i < splits - 1; ++i) {
                if (x < list[(i + 1) * factor + start]) {
                    start = i * factor + start + 1;
                    end   = (i + 1) * factor + start - 1;
                    break;
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

    std::clock_t start = clock();
    printf("--------------------------------------------------------------------\n");
    printf("Linear search x == [%d] found at [%d] location\n", x, unary_search(list, x));
    printf("--------------------------------------------------------------------\n");
    printf("Execution time  == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    start = clock();
    printf("--------------------------------------------------------------------\n");
    printf("Binary search x == [%d] found at [%d] location\n", x, binary_search(list, x));
    printf("--------------------------------------------------------------------\n");
    printf("Execution time  == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    for (int n = 3; n <= 10; ++n) {
        start = clock();
        printf("--------------------------------------------------------------------\n");
        printf("Search with [%d] splits, x == [%d] found at [%d] location\n", n, x, n_split_search(list, x, n));
        printf("--------------------------------------------------------------------\n");
        printf("Execution time  == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    }
}

int main() {
    test_searches();

    return 0;
}

