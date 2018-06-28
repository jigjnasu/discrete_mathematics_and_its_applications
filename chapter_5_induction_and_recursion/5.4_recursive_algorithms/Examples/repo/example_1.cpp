/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 1 (Recursive Factorial)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    for (int n = 0; n <= 10; ++n)
        printf("[%2d]! == [%20d]\n", n, factorial(n));

    return 0;
}
