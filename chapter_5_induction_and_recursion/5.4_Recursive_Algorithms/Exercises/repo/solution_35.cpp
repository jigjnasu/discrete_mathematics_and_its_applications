/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 35
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <cstdio>

int recursive(int n) {
    if (n <= 2)
        return 2 * n + 1;
    else
        return recursive(n - 1) * recursive(n - 2) * recursive(n - 2) * recursive(n - 3) * recursive(n - 3) * recursive(n - 3);
}

int iterative(int n) {
    if (n <= 2)
        return 2 * n + 1;
    int a = 1;
    int b = 3;
    int c = 5;
    int d = c * b * b * a * a * a;
    for (int i = 4; i <= n; ++i) {
        a = b;
        b = c;
        c = d;
        d = c * b * b * a * a * a;
    }

    return d;
}

int main() {
    printf("------------------------------------------------------------\n");
    for (int n = 0; n < 5; ++n)
        printf("[%d] == [%8d]\n", n, recursive(n));
    printf("------------------------------------------------------------\n");

    printf("------------------------------------------------------------\n");
    for (int n = 0; n < 5; ++n)
        printf("[%d] == [%8d]\n", n, iterative(n));
    printf("------------------------------------------------------------\n");

    return 0;
}
