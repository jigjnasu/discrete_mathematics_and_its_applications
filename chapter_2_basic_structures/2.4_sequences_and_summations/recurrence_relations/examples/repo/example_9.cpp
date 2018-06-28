/*
  Recurrence program for Example 9 of 2.4 Sequences and Summations.
  Discrete Mathematics and Its Applications by Kenneth H. Rosen
  Author : Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 30th, 2016 
 */

#include <cstdio>

// Let's test the recurrence relation
// a1 = 3
// an = 2an - 1 - an - 2
// Let's test is it equal to 3n
int example_9(int n) {
    if (n == 1)
        return 3;
    else if (n == 2)
        return 6;
    else
        return (2 * example_9(n - 1)) - example_9(n - 2);
}

void test_example_9() {
    for (int n = 1; n < 100; ++n) {
        const int result = example_9(n);
        if (3 * n == result)
            printf("[3 X %3d] == [%d]\n", n, result);
        else
            printf("The recurrence relation is not true for 3n\n");
    }
}

int main() {
    test_example_9();
    
    return 0;
}
