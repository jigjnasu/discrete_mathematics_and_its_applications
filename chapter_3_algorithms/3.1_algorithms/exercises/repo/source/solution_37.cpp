/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 33
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */


#include "common.h"
#include <cstdio>
#include <vector>
#include <chrono>

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void bubble_sort(std::vector<int>& V) {
    for (std::size_t i = 1; i < V.size(); ++i)
        for (std::size_t j = 1; j < V.size(); ++j)
            if (V[j - 1] > V[j])
                swap(V[j - 1], V[j]);
}

void modified_bubble_sort(std::vector<int>& V) {
    for (std::size_t i = 1; i < V.size(); ++i) {
        bool changed = false;
        for (std::size_t j = 1; j < V.size(); ++j) {
            if (V[j - 1] > V[j]) {
                swap(V[j - 1], V[j]);
                changed = true;
            }
        }

        if (changed == false)
            break;
    }
}

void test_sorts() {
    int min = 0;
    int max = 100;
    int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;

    std::vector<int> V = common.build_vector(limit, min, max);
    std::vector<int> V1 = V;

    common.print(V);
    using clock = std::chrono::steady_clock;
    clock::time_point start = clock::now();
    bubble_sort(V);
    printf("Execution time for normal bubble sort == [%16f] seconds\n",
           std::chrono::duration<double>(clock::now() - start));
    common.print(V);

    start = clock::now();
    modified_bubble_sort(V1);
    printf("Execution time for modified bubble sort == [%16f] seconds\n",
           std::chrono::duration<double>(clock::now() - start));
    common.print(V1);
}

int main() {
    test_sorts();
    
    return 0;
}
