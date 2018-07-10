/*
  Implementation of Algorithm 3(Binary Search)
  Chapter 3.1 (Algorithms)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Jan 18th, 2017
 */

#include "merge_sort.h"
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <random>

int random(int max, int min) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
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

void print(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}

std::vector<int> build_list() {
    const int min = 0;
    const int max = 100;
    std::vector<int> list;

    for (int i = 0; i < 50; ++i)
        list.push_back(random(min, max));

    return list;
}

void test_max() {
    utility::algorithms::sort::MergeSort<int> sort;
    int x = 178;
    for (int i = 0; i < 10; ++i) {
        std::vector<int> list = build_list();
        sort.sort(list);
        printf("--------------------------------------------------------------------------------\n");
        print(list);
        printf("Element [%d] found at [%d] location\n", x, binary_search(list, x));
        printf("--------------------------------------------------------------------------------\n");
    }
}

int main() {
    test_max();

    return 0;
}
