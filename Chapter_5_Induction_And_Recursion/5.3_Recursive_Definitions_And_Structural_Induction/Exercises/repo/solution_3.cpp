/*
  Discrete Mathematics and It's Applications
  By Kenneth H. Rosen
  
  Chapter 5.3 Recursive Definitions and Structural Inductions
  Solution 3 by Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 06/07/2017
 */

#include <cstdio>

// Basic     Step f(0)     = -1
// Basic     Step f(1)     = 2
// Recursive Step f(n + 1) = f(n) + 3f(n - 1)
int a(int n) {
    if (n == 0)
        return -1;
    else if (n == 1)
        return 2;
    else
        return a(n - 1) + 3 * a(n - 2);
}


// Basic     Step f(0)     = -1
// Basic     Step f(1)     = 2
// Recursive Step f(n + 1) = f(n) ^ 2 f(n - 1)
int b(int n) {
    if (n == 0)
        return -1;
    else if (n == 1)
        return 2;
    else
        return b(n - 1) * b (n - 1) * b (n - 2);
}

// Basic     Step f(0)     = -1
// Basic     Step f(1)     = 2
// Recursive Step f(n + 1) = 3f(n) ^ 2 - 4f(n - 1) ^ 2
long long int c(int n) {
    if (n == 0)
        return -1;
    else if (n == 1)
        return 2;
    else
        return (3 * c(n - 1) * c(n - 1)) - (4 * c(n - 2) * c (n - 2));
}

// Basic     Step f(0)     = -1
// Basic     Step f(1)     = 2
// Recursive Step f(n + 1) = f(n - 1) / f(n)
float d(int n) {
    if (n == 0)
        return -1;
    else if (n == 1)
        return 2;
    else
        return d(n - 2) / d(n - 1);
}

void test() {
    const int max = 6;
    printf("----- f(n + 1) = f(n) + 3f(n - 1) -- \n");
    for (int n = 0; n < max; ++n)
        printf("a(%2d) == [%8d]\n", n, a(n));
    printf("---------------------------------\n");

    printf("----- f(n + 1) = f(n) ^ 2 f(n - 1) -\n");
    for (int n = 0; n < max; ++n)
        printf("b(%2d) == [%8d]\n", n, b(n));
    printf("---------------------------------\n");

    printf("----- f(n + 1) = 3f(n)^2 -4f(n - 1)^2\n");
    for (int n = 0; n < max; ++n)
        printf("c(%2d) == [%8lld]\n", n, c(n));
    printf("---------------------------------\n");

    printf("-- f(n + 1) = f(n - 1) / f(n)\n");
    for (int n = 0; n < max; ++n)
        printf("d(%2d) == [%4.4f]\n", n, d(n));
    printf("---------------------------------\n");
}

int main() {
    test();

    return 0;
}
