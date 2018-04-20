/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.2 Solving Linear Recurrence Relations
  Rakesh Kumar, cpp.rakesh@gmail.com
  20/04/2018
 */

#include <cstdio>
#include <cmath>

int recursive(int n) {
    if (n == 1)
        return 3;
    else
        return (3 * recursive(n - 1)) + 2 * n;
}

int equation(int n) {
    return ((-6 * n) - 9 + (11 * std::pow(3, n))) / 6;
}

int main() {
    for (int n = 1; n <= 15; ++n)
        printf("[%4d] == [%10d] || [%10d]\n",
               n, recursive(n), equation(n));

    return 0;
}
