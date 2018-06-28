/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.2 Solving Linear Recurrence Relations
  Rakesh Kumar, cpp.rakesh@gmail.com
  11/04/2018
 */

#include <cstdio>

int recursive_solution(int n) {
    if (n == 0)
        return 2;
    else if (n == 1)
        return 7;
    else
        return recursive_solution(n - 1) + 2 * recursive_solution(n - 2);
}

inline int equation_solution(int n) {
    if (n % 2)
        return (3 * (1 << n)) + 1;
    else
        return (3 * (1 << n)) - 1;;
}

int main() {
    for (int n = 0; n <= 25; ++n)
        printf("[%10d] [%10d]\n", recursive_solution(n),
               equation_solution(n));

    return 0;
}
