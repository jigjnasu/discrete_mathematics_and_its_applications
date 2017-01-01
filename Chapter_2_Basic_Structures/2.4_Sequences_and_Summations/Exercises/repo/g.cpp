/*
  Solution for Problem number 14 (g part)
  This is a c++ program based soltion.
  from Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 1st, 2017

  --------------------------------------------------------------------
  ---                   recurrence relation                        ---
                           = an - 1 - 1    if n mod 2 = 1, odd     ---
  ---                   an                                         ---
  ---                      = an - 1 + 3    if n mod 2 = 0, even    ---
  --------------------------------------------------------------------
 */

#include <cstdio>

int g(int n) {
    if (n == 0)
        return 1;
    else
        if (n % 2)
            return g(n - 1) - 1;
        else
            return g(n - 1) + 3;
}

int main() {
    for (int n = 0; n < 21; ++n)
        printf("[%2d] == [%d]\n", n, g(n));
    
    return 0;
}
