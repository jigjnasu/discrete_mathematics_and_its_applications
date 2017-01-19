/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 18
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <vector>
#include <cstdio>

int last_pos_of_min(const std::vector<int>& list, int& min) {
    min = list[0];
    int pos = 0;

    int i = 1;
    int j = list.size() - 1;

    while (i < j) {
        if (list[i] <= min) {
            min = list[i];
            pos = i + 1;
        }

        if (list[j] <= min) {
            min = list[j];
            pos = j;
        }

        ++i;
        --j;
    }

    if (i == j && list[i] <= min) {
        min = list[i];
        pos = i + 1;
    }

    return pos;
}

void test_last_pos_of_min() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        int min = 0;
        printf("--------------------------------------------------------------------------------\n");
        const std::vector<int> list = common.build_vector(10, 1, 10);
        const int pos = last_pos_of_min(list, min);
        common.print(list);
        printf("Minimum element in the set is [%d] at last location == [%d]\n", min, pos);
        printf("--------------------------------------------------------------------------------\n");        
    }
}

int main() {
    test_last_pos_of_min();
    
    return 0;
}
