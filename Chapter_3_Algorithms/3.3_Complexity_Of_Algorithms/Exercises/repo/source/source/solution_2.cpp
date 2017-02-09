/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 2

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

#include <cstdio>

// From first loop, n comparrions
// From second loop, n comparrions
// From statement, 2 additions
// Total Cost, n ^ 2 comparrisions, 2 *(n ^ 2)
// Total Cost = 3 * (n ^ 2)
// Time complexity of this function is always O(n ^ 2).
// Because regardless of n, or any thing it will always have
// same cost and same instruction set every it will execute.

int problem_2(int n) {
    int t = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            t += i + j;
    return t;
}

int main() {
    printf("Result of problem 1 == [%d]\n", problem_2(200));

    return 0;
}



