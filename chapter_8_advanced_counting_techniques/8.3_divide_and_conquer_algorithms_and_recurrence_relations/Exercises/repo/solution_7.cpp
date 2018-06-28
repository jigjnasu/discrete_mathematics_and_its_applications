/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 7
  Rakesh Kumar, cpp.rakesh@gmail.com
  15/06/2018
 */

#include <bits/stdc++.h>

int power(int x, int y) {
  if (y == 0) {
    return 1;
  } else if (y == 1) {
    return x;
  } else {
    const int t = power(x, y >> 1);
    if (y % 2)
      return t * t * x;
    else
      return t * t;
  }
}

// n must be a multiple of 3 ...
// n | 3 or 0 = n mod 3
double f(int n) {
  if (n == 1)
    return 1;
  else
    return f(n / 3) + 1;
}

int main() {
  for (int i = 1; i <= 10; ++i) {
    const int n = power(3, i);
    printf("[%8d] == [%.0lf]\n", n, f(n));
  }

  return 0;
}
