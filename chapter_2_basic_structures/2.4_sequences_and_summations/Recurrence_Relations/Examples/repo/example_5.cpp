/*
  Recurrence program for Example 5 of 2.4 Sequences and Summations.
  Discrete Mathematics and Its Applications by Kenneth H. Rosen
  Author : Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 30th, 2016 
 */

#include <cstdio>

// As a0 = 2, we will return 2 when n = 0
// else we will return an = an - 1 + 3
int example_5(int n) {
    if (n == 0)
        return 2;
    else
        return 3 + example_5(n - 1);
}

void test_example_5() {
    for (int n = 0; n < 100; ++n)
        printf("a[%3d] == [%d]\n", n, example_5(n));
}

int main() {
    test_example_5();

    return 0;
}
