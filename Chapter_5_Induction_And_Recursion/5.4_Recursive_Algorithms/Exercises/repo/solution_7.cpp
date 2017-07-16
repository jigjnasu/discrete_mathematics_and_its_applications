/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 7
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>

int solution(int x, int n) {
    if (n == 0)
        return 0;
    else
        return solution(x, n - 1) + x;
}

void test() {
    discrete_mathematics::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const int x = common.random(1, 100);
        const int n = common.random(1, 100);
        printf("[%d x %d] == [%d]\n", x, n, solution(x, n));
    }
}

int main() {
    test();

    return 0;
}
