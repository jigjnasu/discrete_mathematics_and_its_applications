/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 1
  Rakesh Kumar, cpp.rakesh@gmail.com
  09/06/2018
 */

#include <bits/stdc++.h>

int F(int n) {
    if (n == 1)
        return 2;
    else
        return F(n >> 1) + 2;
}

int main() {
    const int n = 64;
    printf("F(%d) == [%d]\n", n, F(n));

    return 0;
}
