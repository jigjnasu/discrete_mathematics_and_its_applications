/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 23
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  18/07/2017
 */

#include <cstdio>

int solution(int n) {
    if (n == 0)
        return 0;
    else
        return solution(n - 1) + 2 * (n - 1) + 1;
}

int main() {
    for (int i = 0; i < 10; ++i)
        printf("[%d] ^ 2 == [%4d]\n", i, solution(i));

    return 0;
}
