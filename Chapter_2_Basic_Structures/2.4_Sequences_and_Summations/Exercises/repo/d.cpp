/*
  Solution for Problem number 14 (d part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
  ---                   an = 5 + an - 1                            ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int d(int n) {
    if (n == 0)
        return 0;
    else
        return 5 + d(n - 1);
}

int main() {
    for (int n = 0; n < 21; ++n)
        printf("[%2d] == [%d]\n", n, d(n));
    
    return 0;
}
