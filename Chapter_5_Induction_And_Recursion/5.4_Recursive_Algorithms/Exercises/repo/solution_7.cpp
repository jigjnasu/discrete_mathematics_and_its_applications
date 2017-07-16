/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 1 (Recursive Factorial)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */


#include <cstdio>
#include <cstdlib>

int solution(int x, int n) {
    if (n == 0)
        return 0;
    else
        return solution(x, n - 1) + x;
}

int random(int min, int max) {
    return min + rand() % (max - min + 1);
}

void test() {
    for (int i = 0; i < 10; ++i) {
        const int x = random(1, 100);
        const int n = random(1, 100);
        printf("[%d x %d] == [%d]\n", x, n, solution(x, n));
    }
}

int main() {
    test();

    return 0;
}
