/*
  Solution for Problem number 14 (h part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
  ---                   a(n) = n * a(n - 1)                        ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int h(int n) {
    if (n == 0)
        return 1;
    else
        return n * h(n - 1);
}

int main() {
    for (int n = 0; n < 15; ++n)
        printf("[%2d] == [%d]\n", n, h(n));
    
    return 0;
}
