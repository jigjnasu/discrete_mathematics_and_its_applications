/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 10
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>
#include <vector>

int largest(const std::vector<int>& list, int n) {
    discrete_mathematics::Common<int> common;
    if (n == 0)
        return list[0];
    else
        return common.max(list[n], largest(list, n - 1));
}

inline void print(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}

void test() {
    discrete_mathematics::Common<int> common;
    std::vector<int> list;
    for (int i = 0; i < 10; ++i)
        list.push_back(common.random(1, 100));

    print(list);

    printf("Largest element in the list == [%d]\n", largest(list, list.size() - 1));
}

int main() {
    test();

    return 0;
}
