/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 21
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <vector>
#include <cstdio>

// This can done like selection sort, first select the least, then second least ...
// And so on.......

// Baby of Selection sort.

int min_pos(const std::vector<int>& list, int start) {
    int pos = start;
    int min = list[start];

    for (int i = start + 1; i < list.size(); ++i) {
        if (list[i] < min) {
            pos = i;
            min = list[i];
        }
    }

    return pos;
}

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void sort_first_three(std::vector<int>& list) {
    for (int i = 0; i < 3; ++i) {
        const int pos = min_pos(list, i);
        if (pos != i)
            swap(list[i], list[pos]);
    }
}

void test_sort_first_three() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        printf("-------------------------------------------------------------------------\n");
        std::vector<int> list = common.build_vector(50, 0, 100);
        common.print(list);
        sort_first_three(list);
        common.print(list);
        printf("-------------------------------------------------------------------------\n");        
    }
}


int main() {
    test_sort_first_three();
    
    return 0;
}
