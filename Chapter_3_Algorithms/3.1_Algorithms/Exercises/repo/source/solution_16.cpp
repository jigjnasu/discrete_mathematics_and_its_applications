/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 15
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>

template <typename T>
T min(const std::vector<T>& list) {
    T minimum = list[0];
    int i = 1;
    int j = list.size() - 1;

    while (i < j) {
        if (list[i] < minimum)
            minimum = list[i];
        if (list[j] < minimum)
            minimum = list[j];
        
        ++i;
        --j;
    }

    if (i == j && list[i] < minimum)
        minimum = list[i];
        
    return minimum;
}

void test_min() {
    discrete_mathematics::chapter_3::Common<int> common;

    for (int i = 0; i < 10; ++i) {
        printf("------------------------------------------------------------------\n");
        const std::vector<int> list = common.build_vector(50, 0, 1000);
        common.print(list);
        printf("Miminmum element from this set == [%d]\n", min<int>(list));
        printf("------------------------------------------------------------------\n");
    }
}

int main() {
    test_min();
    
    return 0;
}
