/*
  C++ solution for Problem 17 f.
  Iterative solution and recursive solution.
  Need to check the sequence is correct or not, it must be matching.
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 3rd, 2017
*/

#include <cstdio>
#include <cmath>

int recursive_17_f(int n) {
    if (n == 0)
        return 1;
    else
        return 3 * recursive_17_f(n - 1) + 1;
}

int iterative_17_f(int n) {
    return (3 * std::pow(3, n) - 1) / 2;
}

void test_recursive() {
    for (int n = 0; n <= 15; ++n)
        printf("%d ", recursive_17_f(n));
    printf("\n");
}

void test_iterative() {
    for (int n = 0; n <= 15; ++n)
        printf("%d ", iterative_17_f(n));
    printf("\n");
}

int main() {
    test_recursive();
    test_iterative();
    
    return 0;
}
