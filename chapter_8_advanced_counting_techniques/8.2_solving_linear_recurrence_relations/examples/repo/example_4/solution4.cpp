/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.2 Solving Linear Recurrence Relations
  Rakesh Kumar, cpp.rakesh@gmail.com
  11/04/2018
 */

#include <cstdio>
#include <cmath>

// Fibonacci series with recursion
int f_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return f_recursive(n - 1) + f_recursive(n - 2);
}

// Fibonacci series with equation
int f_equation(int n) {
    const double t = std::sqrt(5);
    const double a = 1 / t;
    const double b = std::pow(((1 + t) / 2), n);
    const double c = std::pow(((1 - t) / 2), n);
    return (a * b) - (a * c);
}

int main() {
    for (int n = 0; n <= 25; ++n)
        printf("Fibonacci(%4d) == [%10d] || [%10d]\n",
               n, f_recursive(n), f_equation(n));

    return 0;
}
