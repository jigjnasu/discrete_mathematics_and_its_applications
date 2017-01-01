/*
  Solution for Problem number 14 (c part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
  ---                   a(n) = 2 + a(n - 1)                        ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int c(int n) {
    if (n == 0)
        return 3;
    else
        return 2 + c(n - 1);
}

int main() {
    for (int n = 0; n < 21; ++n)
        printf("[%2d] == [%d]\n", n, c(n));        
    
    return 0;
}
