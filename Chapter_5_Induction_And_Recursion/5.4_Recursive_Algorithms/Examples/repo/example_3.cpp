/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 3 (Recursive gcd)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>
#include <cstdlib>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

inline int max(int a, int b) {
    return a > b ? a : b;
}

inline int min(int a, int b) {
    return a < b ? a : b;
}

inline int random(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    for (int i = 0; i < 10; ++i) {
        const int a = random(1, 100);
        const int b = random(1, 100);
        printf("gcd(%4d, %4d) == [%4d]\n", a, b, gcd(max(a, b), min(a, b)));
    }

    return 0;
}
