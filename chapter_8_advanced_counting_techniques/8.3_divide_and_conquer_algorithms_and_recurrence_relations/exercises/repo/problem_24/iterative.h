/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 24
  Rakesh Kumar, cpp.rakesh@gmail.com
  18/07/2018
 */

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_ITERATIVE_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_ITERATIVE_H_

#include "common.h"

template <typename T>
void iterative(const std::vector<std::pair<T, T>>& p) {
    T a      = 0;
    T b      = 1;
    double min = euclidean_distance(p[0], p[1]);
    for (std::size_t i = 1; i < p.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < p.size(); ++j) {
            const double m = euclidean_distance(p[i], p[j]);
            if (m < min) {
                min = m;
                a   = i;
                b   = j;
            }
        }
    }

    printf("-------------------------------------------------------\n");
    printf("Minimum distance between (%2d and %2d) == [%lf]\n", a, b, min);
    printf("-------------------------------------------------------\n");
}


#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_ITERATIVE_H_
