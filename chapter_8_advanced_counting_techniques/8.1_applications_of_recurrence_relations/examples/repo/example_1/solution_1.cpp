/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.1 Example 1 (Fibonacci Numbers)
  Rakesh Kumar, cpp.rakesh@gmail.com
  01/11/2017
 */

#include "matrix.h"
#include <cstdio>
#include <chrono>
#include <vector>

/*
  Iterative fibonacci number implementation
 */
int fibonacci_iterative(int n) {
    if (n <= 2)
        return 1;

    int a = 1;
    int b = 1;
    int c = a + b;
    for (int i = 4; i <= n; ++i) {
        a = b;
        b = c;
        c = a + b;
    }

    return c;
}

/*
  Recursive (Naive) fibonacci number implementation
 */

int fibonacci_recursive(int n) {
    if (n <= 2)
        return 1;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

/*
  Dynamic Programming fibonacci
 */

int fibonacci_dp(int n, std::vector<int>& dict) {
    if (dict[n - 1]) {
        return dict[n - 1];
    } else {
        if (n <= 2) {
            dict[n - 1] = 1;
        } else {
            dict[n - 2] = fibonacci_dp(n - 1, dict);
            dict[n - 3] = fibonacci_dp(n - 2, dict);
            dict[n - 1] = dict[n - 2] + dict[n - 3];
        }
        return dict[n - 1];
    }
}

/*
  Matrix Power Multiplication
 */

Matrix<2> power(Matrix<2>& m, int n) {
    if (n == 0) {
        int m[2][2] = {{1, 0}, {0, 1}};
        Matrix<2> unity(m);
        return unity;
    } else if (n == 1){
        return m;
    } else {
        Matrix<2> t = power(m, n >> 1);
        if (n % 2)
            return m * t * t;
        else
            return t * t;
    }
}

/*
  Fibonacci numbers generator based on Matrix Multiplication
  F(n + 1)    F(n)
  F(n)        F(n - 1)
 */


int fibonacci_matrix(int n) {
    int m[2][2] = {{1, 1}, {1, 0}};
    Matrix<2> mat(m);
    return power(mat, n).get(0, 0);
}

void test_fibonacci() {
    // test the iterative one
    using clock = std::chrono::steady_clock;
    clock::time_point start = clock::now();
    printf("-- Iterative -- \n");
    for (int n = 1; n <= 35; ++n)
        printf("%d ", fibonacci_iterative(n));
    printf(" || [[%16lf] seconds]\n", std::chrono::duration<double>(clock::now() - start).count());

    // test the recursive naive fibonacci
    start = clock::now();
    printf("-- Recursive -- \n");
    for (int n = 1; n <= 35; ++n)
        printf("%d ", fibonacci_recursive(n));
    printf(" || [[%16lf] seconds]\n", std::chrono::duration<double>(clock::now() - start).count());

    // test the recursive dynamic programming fibonacci
    start = clock::now();
    printf("-- Dynamic Programming -- \n");
    std::vector<int> dict(35, 0);
    for (int n = 1; n <= 35; ++n)
        printf("%d ", fibonacci_dp(n, dict));
    printf(" || [[%16lf] seconds]\n", std::chrono::duration<double>(clock::now() - start).count());

    // test the matrix based fibonacci series
    start = clock::now();
    printf("-- Matrix Power Multiplication Fibonacci -- \n");
    for (int n = 0; n < 35; ++n)
        printf("%d ", fibonacci_matrix(n));
    printf(" || [[%16lf] seconds]\n", std::chrono::duration<double>(clock::now() - start).count());
}

int main() {
    test_fibonacci();

    return 0;
}

