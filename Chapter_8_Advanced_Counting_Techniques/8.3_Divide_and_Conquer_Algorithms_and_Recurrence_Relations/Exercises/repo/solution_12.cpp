/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 12
  Rakesh Kumar, cpp.rakesh@gmail.com
  17/06/2018
 */

#include <bits/stdc++.h>

double log(double x, double b) {
    return std::log(x) / std::log(b);
}

int f(int n) {
    if (n == 1)
        return 1;
    else
        return (2 * f(n / 3)) + 4;
}

inline double e(int n) {
    return (5 * std::pow(2, log(n , 3))) - 4;
}

int main() {
    for (int i = 0; i <= 15; ++i) {
        const int n = std::pow(3, i);
        printf("[%10d] == [%10d] || [%10.0lf]\n", n, f(n), e(n));
    }

    return 0;
}
