/*
  Recurrence program for Example 8 of 2.4 Sequences and Summations.
  Discrete Mathematics and Its Applications by Kenneth H. Rosen
  Author : Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 30th, 2016 
 */

#include <cstdio>

// This is the example of factorial
// a0 = 1
// an = n * an - 1
int example_8(int n) {
    if (n == 1)
        return 1;
    else
        return n * example_8(n - 1);
}

void test_example_8() {
    for (int n = 1; n < 15; ++n)
        printf("[%3d]! == [%d]\n", n, example_8(n));
}

int main() {
    test_example_8();

    return 0;
}
