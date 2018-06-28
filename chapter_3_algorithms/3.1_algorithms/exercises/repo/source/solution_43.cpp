/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 43
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 23rd, 2017
 */

#include "common.h"
#include "merge_sort.h"
#include <cstdio>
#include <vector>

int unary_insert(const std::vector<int>& list, int x) {
    for (std::size_t i = 0; i < list.size(); ++i) {
        if (x <= list[i])
            return i + 1;
    }

    return list.size();
}

void test_unary_insert() {
    int min = 1;
    int max = 100;
    int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;
    discrete_mathematics::chapter_3::MergeSort<int> sort;

    std::vector<int> list = common.build_vector(limit, min, max);
    sort.sort(list);

    const int x = common.random(min, max);
    common.print(list);
    printf("------------------------------------------------------\n");
    printf("[%d] can be inserted at [%d] location\n", x, unary_insert(list, x));
    printf("------------------------------------------------------\n");    
}

int main() {
    test_unary_insert();

    return 0;
}


