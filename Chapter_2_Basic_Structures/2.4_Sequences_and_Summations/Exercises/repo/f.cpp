/*
  Solution for Problem number 14 (f part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
  ---                   an = 2(n - 1) + 2 + an - 1                 ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int f(int n) {
    if (n == 0)
        return 0;
    else
        return 2 * (n - 1) + 2 + f(n - 1);
}

int main() {
    for (int n = 0; n < 21; ++n)
        printf("[%2d] == [%d]\n", n, f(n));
    
    return 0;
}
