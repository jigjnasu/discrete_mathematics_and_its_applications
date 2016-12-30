/*
  Recurrence program for Example 6 of 2.4 Sequences and Summations.
  Discrete Mathematics and Its Applications by Kenneth H. Rosen
  Author : Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 30th, 2016 
 */

#include <cstdio>

// Given initial values a0 = 3 and a1 = 5
// The recurrence relation is an = an - 1 - an - 2
int example_6(int n) {
    if (n == 0)
        return 3;
    else if (n == 1)
        return 5;
    else
        return example_6(n - 1) - example_6(n - 2);
}

void test_example_6() {
    for (int n = 0; n < 30; ++n)
        printf("[%3d] == [%d]\n", n, example_6(n));
}

int main() {
    test_example_6();
    
    return 0;
}
