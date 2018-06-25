/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 14
  Rakesh Kumar, cpp.rakesh@gmail.com
  17/06/2018
 */

#include <bits/stdc++.h>

// Basically f(2^k) has k elimination rounds.
// Basically f(n) has log_2(n) elimination rounds.
// f(2^k) = f(2^{k - 1}) + 1 elimination rounds.

int f(int n) {
    if (n == 1)
        return 0;
    else
        return f(n >> 1) + 1;
}

int main() {
    for (int n = 0; n <= 20; ++n) {
        const int t = 1 << n;
        printf("Teams == [%16d] || Rounds == [%8d]\n", t, f(t));
    }

    return 0;
}
