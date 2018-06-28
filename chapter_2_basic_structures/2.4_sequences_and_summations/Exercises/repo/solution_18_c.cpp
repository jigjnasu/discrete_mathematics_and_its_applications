/*
  C++ solution for Problem 18 c.
  Recursive solution 
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 5th, 2017
*/

#include <cstdio>
#include <cmath>

/*
  p = principle
  r = rate of intereset
  n = number of years
 */

double compound_interest(double p, double r, int n) {
    if (n == 0)
        return p;
    else
        return compound_interest(p, r, n - 1) * (1 + 0.01 * r);
}

int main() {
    const double p = 1000;
    const double r = 9;
    const int    n = 100;
    printf("Total amount after [%d] years with [%f] rate of interest == [%f]\n", n, r, compound_interest(p, r, n));
    
    return 0;
}
