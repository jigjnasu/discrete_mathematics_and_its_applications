/*
  Solution for Problem number 14 (a part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
  ---                   an = 6 - an - 1                            ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int a(int n) {
    if (n == 0)
        return 3;
    else
        return 6 - a(n - 1);
}

int main() {
    for (int n = 0; n < 21; ++n)
        printf("[%2d] == [%d]\n", n, a(n));
    
    return 0;
}
