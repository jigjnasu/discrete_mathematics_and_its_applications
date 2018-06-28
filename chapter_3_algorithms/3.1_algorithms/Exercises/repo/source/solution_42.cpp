/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 42
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 23rd, 2017
 */

#include "common.h"
#include <cstdio>
#include <vector>

std::size_t minimum_pos(const std::vector<int>& V, std::size_t start_pos) {
    std::size_t pos = start_pos;
    int min = V[start_pos];

    for (std::size_t i = start_pos + 1; i < V.size(); ++i) {
        if (V[i] < min) {
            min = V[i];
            pos = i;
        }
    }

    return pos;
}

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void selection_sort(std::vector<int>& V) {
    for (std::size_t i = 0; i < V.size() - 1; ++i) {
        const std::size_t pos = minimum_pos(V, i);
        if (pos != i)
            swap(V[i], V[pos]);
    }
}

void test_selection_sort() {
    const int min = 1;
    const int max = 100;
    const int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;
    
    std::vector<int> list = common.build_vector(limit, min, max);

    common.print(list);
    selection_sort(list);
    common.print(list);
}

int main() {
    test_selection_sort();

    return 0;
}
