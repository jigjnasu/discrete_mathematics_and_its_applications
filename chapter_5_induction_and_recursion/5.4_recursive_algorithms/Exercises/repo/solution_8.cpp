/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 8
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return sum(n - 1) + n;
}

void test() {
    discrete_mathematics::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const int n = common.random(1, 100);
        printf("Sum of [%d] positive integers == [%d]\n", n, sum(n));
    }
}

int main() {
    test();

    return 0;
}
