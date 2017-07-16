/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 12
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>

int solution(int x, int n, int m) {
    discrete_mathematics::Common<int> common;
    if (n == 0)
        return 1;
    else
        return (solution(x, n - 1, m) * (x % m) % m);
}

void test() {
    discrete_mathematics::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const int x = common.random(1, 100);
        const int n = common.random(1, 10);
        const int m = common.random(1, 10);
        
        printf("([%d] ^ [%d]) mod [%d] == [%d]\n", x, n, m, solution(x, n, m));
    }
}

int main() {
    test();

    return 0;
}
