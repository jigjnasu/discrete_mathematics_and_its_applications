/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 8
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include <cstdio>
#include <cstdlib>

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return sum(n - 1) + n;
}

int random(int min, int max) {
    return min + rand() % (max - min + 1);
}
    
void test() {
    for (int i = 0; i < 10; ++i) {
        const int n = random(1, 100);
        printf("Sum of [%d] positive integers == [%d]\n", n, sum(n));
    }
}

int main() {
    test();

    return 0;
}
