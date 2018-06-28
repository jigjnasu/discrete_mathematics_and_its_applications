/*
  Recurrence program for Example 7 of 2.4 Sequences and Summations.
  Discrete Mathematics and Its Applications by Kenneth H. Rosen
  Author : Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 30th, 2016 
 */

#include <cstdio>

// This is the example of fibonacci number
// f0 = 0, f1 = 1
// fn = fn - 1 + fn - 2

int example_7(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return example_7(n - 1) + example_7(n - 2);
}

void test_example_7() {
    for (int n = 0; n < 40; ++n)
        printf("%d\n", example_7(n));
}

int main() {
    test_example_7();
    
    return 0;
}
