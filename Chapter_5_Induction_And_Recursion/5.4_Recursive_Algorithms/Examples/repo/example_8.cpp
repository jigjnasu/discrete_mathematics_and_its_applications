/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 8 (Iterative Fibonacci)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>

int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    
    int a = 0;
    int b = 1;
    int c = a + b;
    for (int i = 3; i <= n; ++i) {
        a = b;
        b = c;
        c = a + b;
    }

    return c;
}    

int main() {
    for (int n = 0; n <= 10; ++n)
        printf("fibonacci(%2d) == [%4d]\n", n, fibo(n));

    return 0;
}
