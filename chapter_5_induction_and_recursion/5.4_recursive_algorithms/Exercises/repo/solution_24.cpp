/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 24
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <cstdio>

int solution(int a, int n) {
    if (n == 0)
        return 1;
    else
        return (a * a) * solution(a, n - 1);
}

int main() {
    const int a = 2;
    for (int n = 0; n < 10; ++n)
        printf("[%d] ^ 2{%d} == [%d]\n", a, n, solution(a, n));

    return 0;
}
