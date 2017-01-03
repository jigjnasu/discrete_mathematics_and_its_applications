/*
  C++ solution for Problem 16 d.
  Iterative solution and recursive solution.
  Need to check the sequence is correct or not, it must be matching.
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 3rd, 2017
*/

#include <cstdio>
#include <cmath>

int recursive_16_d(int n) {
    if (n == 0)
        return -1;
    else
        return 2 * recursive_16_d(n - 1) - 3;
}

int iterative_16_d(int n) {
    return -4 * std::pow(2, n) + 3;
}

void test_recursive() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", recursive_16_d(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", iterative_16_d(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
