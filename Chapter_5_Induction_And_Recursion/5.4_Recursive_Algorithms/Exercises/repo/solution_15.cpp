/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 15
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>

int gcd(int a, int b) {
    if (a <= 0)
        return b;
    else if (a == b - a)
        return a;
    else if (a < b - a)
        return gcd(a, b - a);
    else
        return gcd(b - a, a);
}

void test() {
    discrete_mathematics::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const int a = common.random(1, 100);
        const int b = common.random(1, 100);
        printf("gcd(%d, %d) == [%d]\n", a, b, gcd(a, b));
    }
}

int main() {
    test();

    return 0;
}
