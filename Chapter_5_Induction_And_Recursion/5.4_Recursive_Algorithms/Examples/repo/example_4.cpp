/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 4 (Recursive Modular Expansion)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>

int pow(int b, int n, int m) {
    if (n == 0) {
        return 1;
    } else {
        const int t = pow(b, n >> 1, m);
        if (n % 2)
            return (((t * t) % m) * (b % m)) % m;
        else
            return (t * t) % m;
    }
}

int main() {
    int b = 2;
    int m = 3;
    for (int n = 0; n <= 10; ++n)
        printf("(%2d ^ %2d) mod (%2d) == [%2d]\n", b, n, m, pow(b, n, m));

    return 0;
}
