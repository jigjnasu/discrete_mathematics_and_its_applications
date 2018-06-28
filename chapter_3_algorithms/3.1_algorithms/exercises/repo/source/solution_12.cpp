/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 12
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>

void swap(int& x, int& y, int& z) {
    const int temp = x;
    x = y;
    y = z;
    z = temp;
}

void test_swap() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 50; ++i) {
        int x = common.random(0, 100);
        int y = common.random(0, 100);
        int z = common.random(0, 100);

        printf("----------------------------------------------------------------------\n");
        printf("Before ---> x == [%5d] || y == [%5d] || z == [%5d]\n", x, y, z);
        swap(x, y, z);
        printf("After  ---> x == [%5d] || y == [%5d] || z == [%5d]\n", x, y, z);
        printf("----------------------------------------------------------------------\n");        
    }
}

int main() {
    test_swap();

    return 0;
}
