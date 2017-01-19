/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 11
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>

int swap(int& a, int& b) {
    const int t = a;
    a = b;
    b = t;
}

void test_swap() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 50; ++i) {
        int a = common.random(-1000, 1000);
        int b = common.random(-1000, 1000);        
        printf("Before --> a == [%5d] || b == [%5d]\n", a, b);
        swap(a, b);
        printf("After  --> a == [%5d] || b == [%5d]\n", a, b);        
    }
}

int main() {
    test_swap();
    
    return 0;
}
