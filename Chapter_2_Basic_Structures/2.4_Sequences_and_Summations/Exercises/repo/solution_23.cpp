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
  b = starting borrowed ammount
  r = rate of interest
  i = monthly installment
  m = number of months
 */

double balance_recursive(double b, double r, double i, int m) {
    if (m == 0) {
        return b;
    } else {
        return balance_recursive(b, r, i, m - 1) * (12 - r * 0.01) / 12;
    }
}

/*
  l  = loan amount
  r  = rate of interest
  mi = monthly installment
 */
void amortization_schedule(double l, double r, double mi) {
    double l_a = l;
    double l_b = balance_recursive(l, r, mi, 0);
    int n = 0;
    
    while (1) {
        const double p = l_a - l_b;
        printf("Month[%d] ==> Loan amount == [%f] || Monthly installment == [%f] || Interest paid == [%f] || Principle paid == [%f]\n",
               n, l_a, mi, mi - p, p);
        l_a = l_b;
        l_b = balance_recursive(l, r, mi, n);
        if (l_a <= 0.0f)
            break;
        ++n;
    }
}


int main() {
    const double l  = 5000;
    const double r  = 7;
    const double mi = 100;
    amortization_schedule(l, r, mi);
    
    return 0;
}
