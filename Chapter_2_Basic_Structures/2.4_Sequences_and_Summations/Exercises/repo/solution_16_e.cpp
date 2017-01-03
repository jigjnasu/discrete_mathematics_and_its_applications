/*
  C++ solution for Problem 16 e.
  Iterative solution and recursive solution.
  Need to check the sequence is correct or not, it must be matching.
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 3rd, 2017
*/

#include <cstdio>
#include <cmath>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int recursive_16_e(int n) {
    if (n == 0)
        return 2;
    else
        return (n + 1) * recursive_16_e(n - 1);
}

int iterative_16_e(int n) {
    return 2 * factorial(n + 1);
}

void test_recursive() {
    for (int n = 0; n <= 10; ++n)
        printf("%d ", recursive_16_e(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n <= 10; ++n)
        printf("%d ", iterative_16_e(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
