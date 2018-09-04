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
    discrete_mathematics::chapter_8::Common<double> common;
    discrete_mathematics::chapter_8::Iterative<double> it;
    discrete_mathematics::chapter_8::DivideAndConquer<double> dc;
    const int n = 1e+4;

    std::vector<std::pair<double, double>> p = common.get(n);
    common.print(p);

    printf("[Iterative Algorithm          O(n ^ 2)] Euclidean distance for closest point == [%lf]\n", it.closest(p));
    printf("[Divide and Conquer Algorithm O(nlogn)] Euclidean distance for closest point == [%lf]\n", dc.closest(p));
}

int main() {
    test();

    return 0;
}
