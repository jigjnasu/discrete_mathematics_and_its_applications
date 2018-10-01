/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 27
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

/*
  Input, asscending sorted vector / list.

  Algorithm 1, linear search O(n), search each element from start to end.
  Algorithm 2, binary search O(lg n) search element in two parts
       | ----- | ------ |, if x < mid search in left else in right
  Algorthm 3, ternary search (log3 n)
       | ----- | ------ | ----- |, if x in first half, second or third search in that.
 */

#include "merge_sort.h"
#include "common.h"
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <chrono>

const int min   = 0;
const int max   = 10000;
const int limit = 1000000;

int linear_search(const std::vector<int>& list, int x) {
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

const int n = 3;
int ternary_search(const std::vector<int>& list, int x) {
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
            continue;
        } else {
            for (int i = 1; i < n; ++i) {
                if (x < list[start + i * split]) {
                    end = start + i * split - 1;
                    start += (i - 1) * split + 1;
                    break;
                }
            }
        }
    }

    return 0;
}

void test_searches() {
    discrete_mathematics::chapter_3::Common<int> common;

    std::vector<int> list;
    for (int i = 1; i <= limit; ++i)
        list.push_back(i);
    const int x = common.random(min, limit);

    // Algorithm 1 (Linear Search)
    using clock = std::chrono::steady_clock;
    clock::time_point start = clock::now();
    printf("---------------------------------------------------------------\n");
    printf("[%d] found at [%d] location in the input list\n", x, linear_search(list, x));
    printf("Execution time == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start));
    printf("---------------------------------------------------------------\n");

    // Algorithm 2 (Binary Search)
    start = clock::now();
    printf("---------------------------------------------------------------\n");
    printf("[%d] found at [%d] location in the input list\n", x, binary_search(list, x));
    printf("Execution time == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start));
    printf("---------------------------------------------------------------\n");

    // Algorithm 2 (Binary Search)
    start = clock::now();
    printf("---------------------------------------------------------------\n");
    printf("[%d] found at [%d] location in the input list\n", x, ternary_search(list, x));
    printf("Execution time == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start));
    printf("---------------------------------------------------------------\n");
}

int main() {
    test_searches();

    return 0;
}
