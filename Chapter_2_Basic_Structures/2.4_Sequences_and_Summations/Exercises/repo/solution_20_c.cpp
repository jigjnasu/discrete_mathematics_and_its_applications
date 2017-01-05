/*
  C++ solution for Problem 20 c.
  Recursive solution 
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 5th, 2017
*/

#include <cstdio>

/*
  p = initial population
  g = growth rate of the population
  n = number of years.
 */

double population(double p, double g, int n) {
    if (n == 0)
        return p;
    else
        return population(p, g, n - 1) * (1 + g * 0.01);
}

int main() {
    const double p = 6.9; // billions in 2010
    const double g = 1.1; // percent
    const int    n = 2030 - 2010;   // number of years
    printf("Population incresed from [%f billion](2010) to [%d] == [%f billion]\n", p, 2010 + n, population(p, g, n));
    
    return 0;
}
