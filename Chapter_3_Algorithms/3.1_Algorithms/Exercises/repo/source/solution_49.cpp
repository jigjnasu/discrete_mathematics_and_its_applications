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

int pos(const std::vector<int>& list, int x,
    int end) {
    int start = 0;

    while (start < end) {
        const int mid = (start + end) >> 1;
        if (x > list[mid])
            start = mid + 1;
        else
            end = mid;
    }

    if (x < list[start])
        return start;
    else
        return start + 1;
}

void binary_insertion_sort(std::vector<int>& list) {
    for (std::size_t i = 1; i < list.size(); ++i) {
        const int x = list[i];

        // We will search for the element in the previous list if
        // we will have last element as big element.
        // Otherwise there is no need as in insertion sort all the
        // last elemets are sorted.
        const int insert_pos = pos(list, list[i], i - 1);
        const int value = list[i];
        for (int j = i; j >= insert_pos; --j)
            list[j] = list[j - 1];
        list[insert_pos] = value;
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

    std::clock_t start = clock();
    insertion_sort(list);    
    printf("------------------------------------------------------------------------\n");
    printf("Execution time taken by insertion sort == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------------\n");

    common.print(list1);
    start = clock();
    binary_insertion_sort(list1);
    common.print(list1);
    printf("------------------------------------------------------------------------\n");
    printf("Execution time taken by binary insertion sort == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------------\n");

    start = clock();
    sort.sort(list2);
    printf("------------------------------------------------------------------------\n");
    printf("Execution time taken by merge sort == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------------\n");
}

int main() {
    test_binary_insertion_sort();

    return 0;
}
