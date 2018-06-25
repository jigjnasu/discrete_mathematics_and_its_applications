/*
  C++ solution for Problem 16 f.
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

int recursive_16_f(int n) {
    if (n == 0)
        return 3;
    else
        return 2 * n * recursive_16_f(n - 1);
}

int iterative_16_f(int n) {
    return 3 * std::pow(2, n) * factorial(n);
}

void test_recursive() {
    for (int n = 0; n < 10; ++n)
        printf("%d ", recursive_16_f(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n < 10; ++n)
        printf("%d ", iterative_16_f(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
