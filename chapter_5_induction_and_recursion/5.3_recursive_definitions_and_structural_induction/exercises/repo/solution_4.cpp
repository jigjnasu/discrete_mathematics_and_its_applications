/*
  Discrete Mathematics and It's Applications
  By Kenneth H. Rosen
  
  Chapter 5.3 Recursive Definitions and Structural Inductions
  Solution 4 by Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 07/07/2017
 */

#include <cstdio>

// Basic     Step f(0)     = 1
// Basic     Step f(1)     = 1
// Recursive Step f(n) - f(n - 1)
int a(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return a(n - 1) - a(n - 2);
}


// Basic     Step f(0)     = 1
// Basic     Step f(1)     = 1
// Recursive Step f(n + 1) = f(n)f(n - 1)
int b(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return b(n - 1) * b(n - 2);
}

// Basic     Step f(0)     = 1
// Basic     Step f(1)     = 1
// Recursive Step f(n + 1) = f(n) ^ 2 + f(n - 1) ^ 3
long long int c(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        const int a = c(n - 1);
        const int b = c(n - 2);
        return a * a + b * b * b;
    }
}

// Basic     Step f(0)     = 1
// Basic     Step f(1)     = 1
// Recursive Step f(n + 1) = f(n) / f(n - 1)
int d(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return d(n - 1) / d(n - 2);
}

void test() {
    const int max = 6;
    printf("----- f(n + 1) = f(n) - f(n - 1) -- \n");
    for (int n = 0; n < max; ++n)
        printf("a(%2d) == [%8d]\n", n, a(n));
    printf("------------------------------------\n");

    printf("----- f(n + 1) = f(n)f(n -1) -------\n");
    for (int n = 0; n < max; ++n)
        printf("b(%2d) == [%8d]\n", n, b(n));
    printf("------------------------------------\n");

    printf("----- f(n + 1) = f(n)^2 + f(n - 1)^3\n");
    for (int n = 0; n < max; ++n)
        printf("c(%2d) == [%8lld]\n", n, c(n));
    printf("------------------------------------\n");

    printf("-- f(n + 1) = f(n) / f(n - 1)\n");
    for (int n = 0; n < max; ++n)
        printf("d(%2d) == [%8d]\n", n, d(n));
    printf("------------------------------------\n");
}

int main() {
    test();

    return 0;
}
