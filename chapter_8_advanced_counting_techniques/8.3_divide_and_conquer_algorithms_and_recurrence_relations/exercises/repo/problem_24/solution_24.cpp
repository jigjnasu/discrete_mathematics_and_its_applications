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
#include "divide_and_conquer.h"

void test() {
    discrete_mathematics::chapter_8::Common<int> common;
    discrete_mathematics::chapter_8::Iterative<int> it;
    const int n = 20;

    std::vector<std::pair<int, int>> p = common.get(n);
    common.print(p);
    printf("Euclidean distance for closest point == [%lf]\n", it.closest(p));
//    divide_and_conquer<int>(p);
}

int main() {
    test();

    return 0;
}
