/*
  C++ solution for Problem 17 e.
  Iterative solution and recursive solution.
  Need to check the sequence is correct or not, it must be matching.
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 3rd, 2017
*/

#include <cstdio>

int recursive_17_e(int n) {
    if (n == 0)
        return 1;
    else
        return 2 * recursive_17_e(n - 1) - 1;
}

int iterative_17_e(int n) {
    return 1;
}

void test_recursive() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", recursive_17_e(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n <= 20; ++n)
        printf("%d ", iterative_17_e(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
