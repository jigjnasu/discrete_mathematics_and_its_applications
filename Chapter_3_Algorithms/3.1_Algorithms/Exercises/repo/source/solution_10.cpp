/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 10
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>

double pow(double x, int y) {
    if (y == 0)
        return 1;
    if (y == 1) {
        return x;
    } else {
        const double t = pow(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}

double power(double x, int y) {
    if (y < 0)
        return 1 / pow(x, y * -1);
    else
        return pow(x, y);
}

void test_power() {
    discrete_mathematics::chapter_3::Common<int> common;
    const double x = 2;
    for (int i = 0; i < 10; ++i) {
        const int y = common.random(-20, 20);
        printf("[%.0f] ^ [%5d] == [%f]\n", x, y, power(x, y));
    }
}

int main() {
    test_power();
    
    return 0;
}
