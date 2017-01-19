/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 15
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include "merge_sort.h"
#include <cstdio>
#include <vector>

// Try to solve this problem with divide and conquer
// We will find a place where it suits exactly
int insert_pos(const std::vector<int>& list, const int x,  int start, int end) {
    if (start == end) {
        if (x < list[start] && start != 0)
            return start - 1;
        else
            return start;
    } else {
        const int mid = (start + end) >> 1;
        if (list[mid] == x)
            return mid;
        else if (x > list[mid] && x < list[mid + 1])
            return mid;
        else if (list[mid] > x)
            insert_pos(list, x, start, mid - 1);
        else
            insert_pos(list, x, mid + 1, end);
    }
}

void test_insert_pos() {
    discrete_mathematics::chapter_3::Common<int> common;
    discrete_mathematics::chapter_3::MergeSort<int> sort;

    for (int i = 0; i < 10; ++i) {
        printf("---------------------------------------------------------------------------------------------------------------\n");
        std::vector<int> list = common.build_vector(50, 0, 100);
        const int x = common.random(0, 100);
        sort.sort(list);
        common.print(list);
        printf("Insert position of [%3d] == [%3d]\n", x, insert_pos(list, x, 0, list.size() - 1));
        printf("---------------------------------------------------------------------------------------------------------------\n");        
    }
}

int main() {
    test_insert_pos();

    return 0;
}
