/*
  Recurrence program for Example 11 of 2.4 Sequences and Summations.
  Discrete Mathematics and Its Applications by Kenneth H. Rosen
  Author : Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 30th, 2016 
 */

#include <cstdio>

/*
  p = principle
  r = rate of interest
  n = number of years
 */

double example_11(double p, double r, int n) {
    if (n == 0) {
        return p;
    } else {
        return example_11(p, r, n - 1) * (1 + 0.01 * r);
    }
}

void test_example_11() {
    double p = 10000;
    double i = 11;
    for (int y = 1; y <= 30; ++y)
        printf("Total amount == [%8.4f] at the end of [%3d] year\n", example_11(p, i, y), y);
}

int main() {
    test_example_11();

    return 0;
}
