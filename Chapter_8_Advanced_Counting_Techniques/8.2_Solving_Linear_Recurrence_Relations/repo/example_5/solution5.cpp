/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.2 Solving Linear Recurrence Relations
  Rakesh Kumar, cpp.rakesh@gmail.com
  11/04/2018
 */

#include <cstdio>
#include <cmath>

int recursive(int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return 6;
    else
        return 6 * recursive(n - 1) - 9 * recursive(n - 2);
}

int equation(int n) {
    return std::pow(3, n) + n * std::pow(3, n);
}

int main() {
    for (int n = 0; n <= 15; ++n)
        printf("[%4d] == [%10d] || [%10d]\n",
               n, recursive(n), equation(n));

    return 0;
}
