/*
  C++ solution for Problem 16 b.
  Iterative solution and recursive solution.
  Need to check the sequence is correct or not, it must be matching.
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 3rd, 2017
*/

#include <cstdio>

int recursive_16_b(int n) {
    if (n == 0)
        return 1;
    else
        return recursive_16_b(n - 1) + 3;
}

int iterative_16_b(int n) {
    return 1 + 3 * n;
}

void test_recursive() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", recursive_16_b(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", iterative_16_b(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
