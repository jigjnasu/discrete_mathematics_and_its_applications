/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 45
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 23rd, 2017
 */

#include "common.h"
#include <cstdio>
#include <vector>

/*
  Let's count all the comarision when list is ordered.
  Insertion sort worst case is O(n ^ 2).
  When already sorted it will have n comarissions.
 */

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void insertion_sort(std::vector<int>& list) {
    for (std::size_t i = 1; i < list.size(); ++i) {
        int j = i;
        while (j > 0 && list[j - 1] > list[j]) {
            printf("Compare pos == [%d] > [%d ] || value == [%d] > [%d]\n", j - 1, j, list[j - 1], list[j]);            
            swap(list[j], list[j - 1]);
            --j;
        }
    }
}

void test_insertion_sort() {
    std::vector<int> list;
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 10; i >= 1; --i)
        list.push_back(i);
    common.print(list);
    insertion_sort(list);
    common.print(list);    
}

int main() {
    test_insertion_sort();
    
    return 0;
}
