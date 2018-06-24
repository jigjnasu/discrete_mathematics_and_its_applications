/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Example 12
  Rakesh Kumar, cpp.rakesh@gmail.com
  24/06/2018
 */


#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_ITERATIVE_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_ITERATIVE_H_

#include "euclidean_distance.h"
#include <vector>
#include <cstdio>

template <typename T>
class Iterative {
public:
    Iterative();
    ~Iterative();

    void closest_pair(const std::vector<Point<T>>& list);
};

template <typename T>
Iterative<T>::Iterative() {}

template <typename T>
Iterative<T>::~Iterative() {}

template <typename T>
void Iterative<T>::closest_pair(const std::vector<Point<T>>& list) {
    int a = 0;
    int b = 1;
    Euclidean<T> euclidean;
    double result = (1 << 30);
    for (std::size_t i = 0; i < list.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < list.size(); ++j) {

            const T r = euclidean.distance(list[i], list[j]);
            if (r < result) {
                result = r;
                a = i;
                b = j;
            }
        }
    }

    printf("closest pair at [%d], [%d] have distance = [%lf]\n", a, b, result);
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_ITERATIVE_H_
