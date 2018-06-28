/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Example 12
  Rakesh Kumar, cpp.rakesh@gmail.com
  24/06/2018
 */


#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_EUCLIDEAN_DISTANCE_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_EUCLIDEAN_DISTANCE_H_

#include "point.h"
#include <cstdio>
#include <cmath>

template <typename T>
class Euclidean {
public:
    Euclidean();
    ~Euclidean();

    double distance(const Point<T>& a, const Point<T>& b) const;
};

template <typename T>
Euclidean<T>::Euclidean() {}

template <typename T>
Euclidean<T>::~Euclidean() {}

template <typename T>
double Euclidean<T>::distance(const Point<T>& a, const Point<T>& b) const {
    const T p = std::abs(a.x() - b.x());
    const T q = std::abs(a.y() - b.y());
    return std::sqrt((p * p) + (q * q));
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_EUCLIDEAN_DISTANCE_H_
