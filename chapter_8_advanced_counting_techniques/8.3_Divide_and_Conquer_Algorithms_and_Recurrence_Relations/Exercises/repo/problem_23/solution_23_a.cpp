/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 23
  Rakesh Kumar, cpp.rakesh@gmail.com
  15/06/2018
 */

#include "solution_23_a.h"
#include "utility.h"

discrete_mathematics::chapter_8::Iterative::Iterative() {}

discrete_mathematics::chapter_8::Iterative::~Iterative() {}

int discrete_mathematics::chapter_8::Iterative::Max(const std::vector<int>& list) {
    discrete_mathematics::chapter_8::Utility<int> util;
    int max = list[0];

    for (std::size_t i = 0; i < list.size(); ++i) {
        int m = list[i];
        max = util.Max(max, m);

        for (std::size_t j = i + 1; j < list.size(); ++j) {
            m += list[j];
            max = util.Max(max, m);
        }
    }

    return max;
}
