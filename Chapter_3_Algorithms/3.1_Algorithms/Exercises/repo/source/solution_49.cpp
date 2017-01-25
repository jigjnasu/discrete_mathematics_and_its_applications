/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 49
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 23rd, 2017
 */


/*
  In insertion sort for placing ith element at it correct place.
  Instead of using linear search we will be using binary search.
 */

#include "common.h"
#include "merge_sort.h"
#include <cstdio>
#include <ctime>

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int pos(const std::vector<int>& list, int end, int x) {
    int start = 0;
    while (start <= end) {
        const int mid = (start + end) >> 1;
        if (x == list[mid])
            return mid;
        else if (x > list[mid])
            start = mid + 1;
        else
            end = mid - 1;            
    }

    printf("s == [%d] || e == [%d] || x == [%d]\n", start, end, x);
    return end;
}

void binary_insertion_sort(std::vector<int>& list) {
    for (std::size_t i = 1; i < list.size(); ++i) {
        const int x = list[i];
        const int p = pos(list, i - 1, list[i]);
        printf("x == [%d] || pos == [%d]\n", x, p);
        for (int j = i; j > p; --j)
            list[j] = list[j - 1];
        list[p] = x;
    }
}

void insertion_sort(std::vector<int>& list) {
    for (std::size_t i = 1; i < list.size(); ++i) {
        int j = i;
        while (j > 0 && list[j - 1] > list[j]) {
            swap(list[j - 1], list[j]);
            --j;
        }
    }
}

void test_binary_insertion_sort() {
    int min = 0;
    int max = 100;
    int limit = 50;
    discrete_mathematics::chapter_3::Common<int> common;
    discrete_mathematics::chapter_3::MergeSort<int> sort;
    std::vector<int> list = common.build_vector(limit, min, max);
    std::vector<int> list1 = list;
    std::vector<int> list2 = list;    
#if 0
    std::clock_t start = clock();
    insertion_sort(list);    
    printf("------------------------------------------------------------------------\n");
    printf("Execution time taken by insertion sort == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------------\n");
#endif
    common.print(list1);
    std::clock_t start = clock();
    binary_insertion_sort(list1);
    common.print(list1);
    printf("------------------------------------------------------------------------\n");
    printf("Execution time taken by binary insertion sort == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------------\n");
#if 0
    start = clock();
    sort.sort(list2);
    printf("------------------------------------------------------------------------\n");
    printf("Execution time taken by merge sort == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------------\n");
#endif
}

int main() {
#if 0
    test_binary_insertion_sort();
#else
    std::vector<int> list;
    for (int i = 2; i < 50; i += 2)
        list.push_back(i);
    discrete_mathematics::chapter_3::Common<int> common;
    common.print(list);
    
    //for (std::size_t i = 2; i < list.size() * 2; i += 2) {
        const int x = 1;
        printf("x == [%d] || position == [%d]\n", x, pos(list, list.size() - 1, x));
        //}
#endif   
    return 0;
}
