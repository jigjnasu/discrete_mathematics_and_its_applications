/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 2 (Recursive power)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>

int power(int a, int n) {
    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1);
}

int main() {
    int a = 2;
    for (int n = 0; n < 16; ++n)
        printf("[%2d ^ %2d] == [%8d]\n", a, n, power(a, n));

    return 0;
}
