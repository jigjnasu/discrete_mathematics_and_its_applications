/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 1

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 9th, 2017
 */

#include <cstdio>

// Time complexity of this function is always O(1).
// Because regardless of n, or any thing it will always have
// same cost and same instruction set every it will execute.

int problem_1() {
    int t = 0;
    for (int i = 1; i <= 3; ++i)
        for (int j = 1; j <= 4; ++j)
            t += (i * j);
    return t;
}

int main() {
    printf("Result of problem 1 == [%d]\n", problem_1());

    return 0;
}



