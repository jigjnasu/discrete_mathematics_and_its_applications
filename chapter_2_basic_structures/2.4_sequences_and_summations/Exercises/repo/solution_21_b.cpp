/*
  C++ solution for Problem 21 b.
  Recursive solution 
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 6th, 2017
*/

#include <cstdio>

int solution_21_b_recursive(int months) {
    if (months == 1)
        return 1;
    else
        return solution_21_b_recursive(months - 1) + months;
}

int solution_21_b_iterative(int months) {
    return (months * months + months) / 2;
}

int main() {
    int months = 12;
    printf("After [%d] months [%d] cars will be produced\n", months, solution_21_b_recursive(months));
    printf("After [%d] months [%d] cars will be produced\n", months, solution_21_b_iterative(months));
    
    return 0;
}
