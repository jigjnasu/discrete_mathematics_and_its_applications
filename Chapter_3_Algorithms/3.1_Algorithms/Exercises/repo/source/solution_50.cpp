/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 50
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 26th, 2017
 */

// Insertion sort algorithm with linear search

#include "common.h"
#include <cstdio>
#include <vector>

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void insertion_sort(std::vector<int>& list) {
    for (std::size_t i = 1; i < list.size(); ++i) {
        int j = i;
        while (j > 0 && list[j - 1] > list[j]) {
            swap(list[j - 1], list[j]);
            --j;
        }
    }
}

void test_insertion_sort() {
    const int min = 1;
    const int max = 100;
    const int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;
    std::vector<int> list = common.build_vector(limit, min, max);
    common.print(list);
    insertion_sort(list);
    common.print(list);
}

int main() {
    test_insertion_sort();
    
    return 0;
}
