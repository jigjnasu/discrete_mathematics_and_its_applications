/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 24
  Rakesh Kumar, cpp.rakesh@gmail.com
  17/07/2018
 */

#include "closest_pair/common.h"
#include "closest_pair/iterative.h"
#include "closest_pair/divide_and_conquer.h"

void test() {
    discrete_mathematics::chapter_8::Common<int> common;
    discrete_mathematics::chapter_8::Iterative<int> it;
    discrete_mathematics::chapter_8::DivideAndConquer<int> dc;

    std::vector<std::pair<int, int>> p = {std::pair<int, int>(1, 3),
                                          std::pair<int, int>(1, 7),
                                          std::pair<int, int>(2, 4),
                                          std::pair<int, int>(2, 9),
                                          std::pair<int, int>(3, 1),
                                          std::pair<int, int>(3, 5),
                                          std::pair<int, int>(4, 3),
                                          std::pair<int, int>(4, 7)};
    common.print(p);

    printf("[Iterative Algorithm          O(n ^ 2)] Euclidean distance for closest point == [%lf]\n", it.closest(p));
    printf("[Divide and Conquer Algorithm O(nlogn)] Euclidean distance for closest point == [%lf]\n", dc.closest(p));
}

int main() {
    test();

    return 0;
}
