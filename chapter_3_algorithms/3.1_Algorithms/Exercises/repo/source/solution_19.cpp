/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 19
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <vector>
#include <cstdio>

void calculate(int x, int y, int z,
               int& min, int& max, double& mean, int& median) {
    mean = (x + y + z) / 3.0f;

    if (x <= y && y <= z) {
        min = x;
        max = z;
        median = y;
    } else if (x <= z && z <= y) {
        min = x;
        max = y;
        median = z;
    } else if (y <= x && x <= z) {
        min = y;
        max = z;
        median = x;
    } else if (y <= z && z <= x) {
        min = y;
        max = x;
        median = z;
    } else if (z <= x && x <= y) {
        min = z;
        max = y;
        median = x;
    } else {
        min = z;
        max = x;
        median = y;
    }
}


void test_all() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        printf("----------------------------------------------------------------------------------------\n");
        const int x = common.random(0, 100);
        const int y = common.random(0, 100);
        const int z = common.random(0, 100);

        int min = 0;
        int max = 0;
        double mean = 0;
        int median = 0;
        calculate(x, y, z, min, max, mean, median);
        
        printf("x == [%3d] || y == [%3d] || z == [%3d]\n", x, y, z);
        printf("[%3d] <= [%3d] <= [%3d]\n", min, median, max);
        printf("Median == [%f]\n", mean);
        printf("----------------------------------------------------------------------------------------\n");        
    }
}

int main() {
    test_all();

    return 0;
}
