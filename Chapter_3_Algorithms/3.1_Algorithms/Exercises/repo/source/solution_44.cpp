/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 44
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 23rd, 2017
 */

#include "common.h"
#include "merge_sort.h"
#include <cstdio>
#include <vector>

int binary_insert(const std::vector<int>& list, int x) {
    int start = 0;
    int end = list.size() - 1;

    while (start <= end) {
        const int mid = (start + end) >> 1;
        printf("start = [%d] || end == [%d] || mid == [%d]\n", start, end, mid);
        if (start == end)
            return start + 1;
        else if (x > list[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
}

void test_binary_insert() {
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
    printf("[%d] can be inserted at [%d] location\n", x, binary_insert(list, x));
    printf("------------------------------------------------------\n");    
}

int main() {
    test_binary_insert();

    return 0;
}


