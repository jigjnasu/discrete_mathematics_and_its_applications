/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 26
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <cstdio>

int pow(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        const int t = pow(a, n >> 1);
        if (n % 2)
            return a * t * t;
        else
            return t * t;
    }
}

int main() {
    const int a = 2;
    for (int n = 0; n < 10; ++n)
        printf("[%2d] ^ [%2d] == [%8d]\n", a, n, pow(a, n));
    
    return 0;
}
