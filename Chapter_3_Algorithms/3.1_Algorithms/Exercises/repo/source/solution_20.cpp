/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 20
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <vector>
#include <cstdio>

void min_max(const std::vector<int>& list, int& min, int& max) {
    min = max = list[0];

    int i = 1;
    int j = list.size() - 1;

    while (i < j) {
        if (list[i] > max)
            max = list[i];
        if (list[j] > max)
            max = list[j];
        if (list[i] < min)
            min = list[i];
        if (list[j] < min)
            min = list[j];

        ++i;
        --j;
    }

    if (i == j) {
        if (list[i] > max)
            max = list[i];
        if (list[i] < min)
            min = list[i];
    }
}

void test_min_max() {
    discrete_mathematics::chapter_3::Common<int> common;
    
    for (int i = 0; i < 10; ++i) {
        printf("---------------------------------------------------------------------------------\n");        
        const std::vector<int> list = common.build_vector(50, 0, 100);
        common.print(list);
        int min = 0;
        int max = 0;
        min_max(list, min, max);
        printf("Min == [%d] || Max == [%d] from the finite sequence of integers\n", min, max);
        printf("---------------------------------------------------------------------------------\n");        
    }
}

int main() {
    test_min_max();

    return 0;
}
