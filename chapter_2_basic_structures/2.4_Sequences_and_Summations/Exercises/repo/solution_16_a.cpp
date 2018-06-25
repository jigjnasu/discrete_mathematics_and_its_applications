/*
  C++ solution for Problem 16 a.
  Iterative solution and recursive solution.
  Need to check the sequence is correct or not, it must be matching.
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 3rd, 2017
*/

#include <cstdio>
#include <cmath>

int recursive_16_a(int n) {
    if (n == 0)
        return 5;
    else
        return -recursive_16_a(n - 1);
}

int iterative_16_a(int n) {
    return std::pow(-1, n) * 5;
}

void test_recursive() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", recursive_16_a(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", iterative_16_a(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
