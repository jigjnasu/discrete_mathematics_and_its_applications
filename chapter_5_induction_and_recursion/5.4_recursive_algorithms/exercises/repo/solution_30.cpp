/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 30
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <cstdio>

int sequence(int n) {
    if (n <= 1)
        return n + 1;
    int a = 1;
    int b = 2;
    int c = a * b;
    for (int i = 3; i <= n; ++i) {
        a = b;
        b = c;
        c = a * b;
    }

    return c;
}

int main() {
    for (int n = 0; n < 9; ++n)
        printf("[%2d] == [%4d]\n", n, sequence(n));
    
    return 0;
}
