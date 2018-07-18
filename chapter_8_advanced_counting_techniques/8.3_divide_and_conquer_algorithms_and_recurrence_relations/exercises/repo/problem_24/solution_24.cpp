/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 24
  Rakesh Kumar, cpp.rakesh@gmail.com
  17/07/2018
 */

#include "common.h"
#include "iterative.h"

void test() {
    const int n = 20;
    std::vector<std::pair<int, int>> p = get<int>(n);
    print<int>(p);
    iterative<int>(p);
}

int main() {
    test();

    return 0;
}
