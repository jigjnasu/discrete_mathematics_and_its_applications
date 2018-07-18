/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Closest Pair algorithm test code
  Rakesh Kumar, cpp.rakesh@gmail.com
  17/07/2018
 */

#include "common.h"
#include "iterative.h"
#include "divide_and_conquer.h"

void test() {
    discrete_mathematics::chapter_8::Common<int> common;
    discrete_mathematics::chapter_8::Iterative<int> it;
    discrete_mathematics::chapter_8::DivideAndConquer<int> dc;
    const int n = 20;

    std::vector<std::pair<int, int>> p = common.get(n);
    common.print(p);

    printf("[Iterative Algorithm          O(n ^ 2)] Euclidean distance for closest point == [%lf]\n", it.closest(p));
    printf("[Divide and Conquer Algorithm O(nlogn)] Euclidean distance for closest point == [%lf]\n", dc.closest(p));
}

int main() {
    test();

    return 0;
}
