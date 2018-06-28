/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 13
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>

int solution(int n, int m) {
    if (n == 0)
        return 1;
    else
        return ((solution(n - 1, m) * n) % m) % m;
}

void test() {
    discrete_mathematics::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const int n = common.random(1, 10);
        const int m = common.random(1, 8);
        printf("[%8d]! mod [%8d] == [%8d]\n", n, m, solution(n, m));
    }
}

int main() {
    test();

    return 0;
}
