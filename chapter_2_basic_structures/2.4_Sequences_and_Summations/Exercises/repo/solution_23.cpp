/*
  C++ solution for Problem 23.
  Recursive solution 
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 6th, 2017
*/

#include <cstdio>
#include <cmath>

/*
  p = starting borrowed ammount(principal)
  r = rate of interest
  n = number of months
 */

double principal(double p, double r, int n) {
    if (n == 0) {
        return p;
    } else {
        return principal(p, r, n - 1) * (12 - r * 0.01) / 12;
    }
}

/*
  l   = loan amount
  r   = rate of interest
  emi = monthly installment
 */
void amortization_schedule(double p, double r, double emi) {
    int n = 1;
    printf("Initial amount borrowed   == [%f]\n", p);
    double total_interest = 0;
    while (p > 0.0f) {
        const double in = p - principal(p , r, 1);
        total_interest += in;
        p = p - emi - in;
        printf("month == [%5d] || principal paid == [%f] || interest paid == [%f] || principal == [%f]\n", n, emi - in, in, p);
        ++n;
    }

    printf("Total interest paid after [%d] months == [%f]\n", n - 1, total_interest);
}


int main() {
    const double l   = 2300000;
    const double r   = 11.75;
    const double emi = 20500;
    amortization_schedule(l, r, emi);
    
    return 0;
}
