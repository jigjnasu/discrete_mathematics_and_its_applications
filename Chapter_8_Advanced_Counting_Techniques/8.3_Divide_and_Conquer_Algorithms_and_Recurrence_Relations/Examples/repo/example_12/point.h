/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Example 12
  Rakesh Kumar, cpp.rakesh@gmail.com
  24/06/2018
 */


#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_POINT_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_POINT_H_

#include <iostream>

template <typename T>
class Point {
public:
    Point();
    Point(T x, T y);
    ~Point();

    T x() const;
    T y() const;

    void x(const T& a);
    void y(const T& b);

    void print() const;

private:
    T m_x;
    T m_y;
};

template <typename T>
Point<T>::Point() {}

template <typename T>
Point<T>::Point(T x, T y) : m_x(x), m_y(y) {}

template <typename T>
Point<T>::~Point() {}

template <typename T>
T Point<T>::x() const {
    return m_x;
}

template <typename T>
T Point<T>::y() const {
    return m_y;
}

template <typename T>
void Point<T>::x(const T& a) {
    m_x = a;
}

template <typename T>
void Point<T>::y(const T& b) {
    m_y = b;
}

template <typename T>
void Point<T>::print() const {
    std::cout << m_x << ", " << m_y;
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_3_EXAMPLE_12_POINT_H_
