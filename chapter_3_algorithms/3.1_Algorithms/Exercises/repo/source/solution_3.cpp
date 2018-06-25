/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 3
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>
#include <vector>
#include <cstdlib>

// Sum of all elements of set S
int sum(const std::vector<int>& list) {
    int sum = 0;
    int i = 0;
    int j = list.size() - 1;

    while (i < j) {
        sum += list[i++];
        sum += list[j--];
    }

    if (i == j)
        sum += list[i];

    return sum;
}

// Test cases
void test_sum() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const std::vector<int> list = common.build_vector(50, 10, 200);
        common.print_vector(list);
        printf("Sum of all the elements of the list == [%d]\n\n", sum(list));
    }
}

int main() {
    test_sum();
    
    return 0;
}
