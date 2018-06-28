/*
  C++ solution for Problem 22 c.
  Recursive solution 
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 5th, 2017
*/

#include <cstdio>
#include <cmath>

/*
  s = starting salary
  c = constant bouns every year
  p = percentage of salary increment
  n = number of years
 */

double salary_iterative(double s, double c, double p, int n) {
    return (c * (std::pow(1 + p * 0.01, n) - 1) / ((1 + p * 0.01) - 1)) + (s * std::pow(1 + p * 0.01, n));
}

double salary_recursive(double s, double c, double p, int n) {
    if (n == 0)
        return s;
    else
        return c + salary_recursive(s, c, p, n - 1) * (1 + p * 0.01);
}

int main() {
    const double s = 50000; // Starting salary in 2009
    const double c = 1000;  // every year constant bonus
    const double p = 5;     // increment percentage
    const int    n = 2017;  // number of years

    printf("Salary Iterative solution -----------------------------\n");
    for (int i = 2009; i <= 2017; ++i)
        printf("Year [%5d] == [%f] salary\n", i, salary_iterative(s, c, p, i - 2009));
    
    printf("\nSalary Recursive solution -----------------------------\n");            
    for (int i = 2009; i <= 2017; ++i)
        printf("Year [%5d] == [%f] salary\n", i, salary_recursive(s, c, p, i - 2009));
    printf("\n");
    
    return 0;
}
