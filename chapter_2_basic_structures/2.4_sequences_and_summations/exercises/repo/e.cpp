/*
  Solution for Problem number 14 (e part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
  ---                   a(n) = 2(n - 1) + 1 + a(n - 1)             ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int e(int n) {
    if (n == 0)
        return 0;
    else
        return 2 * (n - 1) + 1 + e(n - 1);
}

int main() {
    for (int n = 0; n < 21; ++n)
        printf("[%2d] == [%d]\n", n, e(n));
    
    return 0;
}
