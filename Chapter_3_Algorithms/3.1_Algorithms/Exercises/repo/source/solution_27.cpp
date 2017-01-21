/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 27
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

/*
  Input, asscending sorted vector / list.
  
  Algorithm 1, linear search O(n), search each element from start to end.
  Algorithm 2, binary search O(lg n) search element in two parts 
       | ----- | ------ |, if x < mid search in left else in right
  Algorthm 3, ternary search (log3 n)
       | ----- | ------ | ----- |, if x in first half, second or third search in that.
 */

#include "merge_sort.h"
#include "common.h"
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <ctime>

const int min   = 0;
const int max   = 10000;
const int limit = 1000000;

int linear_search(const std::vector<int>& list, int x) {
    for (std::size_t i = 0; i < list.size(); ++i)
        if (x == list[i])
            return i + 1;
    return 0;
}

int binary_search(const std::vector<int>& list, int x) {
    int start = 0;
    int end   = list.size() - 1;
    
    while (start <= end) {
        const int mid = (start + end) >> 1;

        if (list[mid] == x)
            return mid + 1;
        else if (list[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return 0;
}

int ternary_search(const std::vector<int>& list, int x) {
    int start = 0;
    int end   = list.size() - 1;

    while (start <= end) {
        const int factor = (end - start) / 3;
        
        if (list[start + factor] == x)
            return start + factor + 1;
        if (list[start + 2 * factor] == x)
            return start + 2 * factor + 1;

        if (x < list[start + factor]) {
            end = start + factor - 1;
        } else if (x > start + 2 * factor) {
            start = start + 2 * factor + 1;
        } else {
            start = start + factor + 1;
            end = start + 2 * factor - 1;
        }
    }
    
    return 0;
}

void test_searches() {
    discrete_mathematics::chapter_3::Common<int> common;
    discrete_mathematics::chapter_3::MergeSort<int> sort;
    //std::vector<int> list = common.build_vector(limit, min, max);
    //sort.sort(list);
    std::vector<int> list;
    for (int i = 0; i < limit; ++i)
        list.push_back(i);
    const int x = common.random(min, limit);
    
    // Algorithm 1 (Linear Search)
    std::clock_t start = clock();
    printf("---------------------------------------------------------------\n");
    printf("[%d] found at [%d] location in the input list\n", x, linear_search(list, x));
    printf("Execution time == [%.8f]\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("---------------------------------------------------------------\n");

    // Algorithm 2 (Binary Search)
    start = clock();
    printf("---------------------------------------------------------------\n");
    printf("[%d] found at [%d] location in the input list\n", x, binary_search(list, x));
    printf("Execution time == [%.8f]\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("---------------------------------------------------------------\n");

    // Algorithm 2 (Binary Search)
    start = clock();
    printf("---------------------------------------------------------------\n");
    printf("[%d] found at [%d] location in the input list\n", x, ternary_search(list, x));
    printf("Execution time == [%.8f]\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("---------------------------------------------------------------\n");            
}

int main() {
    test_searches();
    
    return 0;
}
