/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 1
  Rakesh Kumar, cpp.rakesh@gmail.com
  09/06/2018
 */

#include <bits/stdc++.h>

// must be in the form of 2^k
// where k >= 0
double function(int n) {
    if (n == 1)
        return 1;
    else
        return (8 * function(n / 2) + (n * n));
}

// f(2^k) = 8f(2^k - 1) + 2^k
// f(k) = 2.2^3k - 2^2k
double equation_k(int n) {
    const int k = log2(n);
    return (2 * std::pow(2, 3 * k)) - (std::pow(2, 2 * k));
}

// f(n) = 2.2^3.log_2n - 2 ^ 2log_2n
double equation_n(int n) {
    return (2 * std::pow(2, 3 * log2(n))) - (std::pow(2, 2 * log2(n)));
}

int main() {
    for (int i = 0; i < 10; ++i)
        printf("%16.0lf || %16.0lf || %16.0lf\n",
               function(std::pow(2, i)), equation_k(std::pow(2, i)), equation_n(std::pow(2, i)));
    return 0;
}
