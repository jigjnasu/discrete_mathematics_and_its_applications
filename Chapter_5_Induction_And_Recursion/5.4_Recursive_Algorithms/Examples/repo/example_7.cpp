/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 7 (Recursive Fibonacci)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>

int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}    

int main() {
    for (int n = 0; n <= 10; ++n)
        printf("fibonacci(%2d) == [%4d]\n", n, fibo(n));

    return 0;
}
