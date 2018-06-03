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
    if (n == 0)
        return 1;
    else if (n == 1)
        return -2;
    else if (n == 2)
        return -1;
    else
        return (-3 * recursive(n - 1)) - (3 * recursive(n - 2)) - recursive(n - 3);
}

int equation(int n) {
    int t = (1 + (3 * n) - (2 * n * n));
    if (n % 2)
        t *= -1;
    return t;
}

int main() {
    for (int n = 0; n <= 25; ++n)
        printf("[%4d] == [%10d] || [%10d]\n",
               n, recursive(n), equation(n));

    return 0;
}
