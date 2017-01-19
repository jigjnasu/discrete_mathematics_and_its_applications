/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 6
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>
#include <vector>

int count_negatives(const std::vector<int>& list) {
    int count = 0;
    int i = 0;
    int j = list.size() - 1;

    while (i < j) {
        if (list[i++] < 0)
            ++count;
        if (list[j--] < 0)
            ++count;
    }

    if (i == j && list[i] < 0)
        ++count;
    
    return count;
}

void test_count_negatives() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const std::vector<int> list = common.build_vector(50, -100, 100);
        common.print_vector(list);
        printf("Total number of negative integers == [%d]\n\n", count_negatives(list));
    }
}

int main() {
    test_count_negatives();

    return 0;
}
