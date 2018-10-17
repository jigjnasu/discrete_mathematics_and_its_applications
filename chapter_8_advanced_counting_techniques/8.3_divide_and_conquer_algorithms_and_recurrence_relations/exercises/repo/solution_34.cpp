/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 1
  Rakesh Kumar, cpp.rakesh@gmail.com
  09/06/2018
 */

#include <bits/stdc++.h>

// n must be in the form of 4^k
// where k >= 0
double function(int n) {
    if (n == 1)
        return 1;
    else
        return (5 * function(n / 4)) + (6 * n);
}

int log_4(int n) {
    return log(n) / log(4);
}

// f(4 ^k) = 5^{k + 2} - 6.4^{k + 1}
double equation(int n) {
    const int k = log_4(n);
    return (std::pow(5, k + 2) - (6 * std::pow(4, k + 1)));
}


int main() {
    for (int i = 0; i < 10; ++i) {
        printf("%16.0lf || %16.0lf\n", function(std::pow(4, i)), equation(std::pow(4, i)));
    }

    return 0;
}
