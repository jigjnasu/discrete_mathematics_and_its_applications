/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 17
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  18/07/2017
 */

#include "common.h"
#include <cstdio>

int product(int x, int y) {
    if (y == 0) {
        return 0;
    } else if (y % 2) {
        return 2 * product(x, y >> 1) + x;
    } else {
        return 2 * product(x, y >> 1);
    }
}

void test() {
    discrete_mathematics::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const int x = common.random(1, 1000);
        const int y = common.random(1, 1000);
        printf("[%4d] X [%4d] == [%8d] || [%8d]\n", x, y, product(x, y), x * y);
    }
}

int main() {
    test();

    return 0;
}
