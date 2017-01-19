/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 17
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>

int pos_of_max_element(const std::vector<int>& list, int& max) {
    int pos = 1;
    max = list[0];
    
    int i = 1;
    int j = list.size() - 1;

    while (i < j) {
        if (list[i] > max) {
            max = list[i];
            pos = i + 1;
        }

        if (list[j] > max) {
            max = list[j];
            pos = j;
        }

        ++i;
        --j;
    }

    if (i == j && list[i] > max) {
        pos = i + 1;
        max = list[i];
    }
    
    return pos;
}

void test_pos_of_max_element() {
    discrete_mathematics::chapter_3::Common<int> common;
    
    for (int i = 0; i < 10; ++i) {
        int max = 0;
        printf("-----------------------------------------------------------------------------------\n");
        const std::vector<int> list = common.build_vector(50, 0, 100);
        common.print(list);
        const int pos = pos_of_max_element(list, max);
        printf("First location of the maximum element [%d] == [%d]\n", max, pos);
        printf("-----------------------------------------------------------------------------------\n");        
    }
}


int main() {
    test_pos_of_max_element();

    return 0;
}
