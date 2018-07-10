/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 23, Utility functions
  Rakesh Kumar, cpp.rakesh@gmail.com
  15/06/2018
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_UTILITY_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_UTILITY_H_

#include <vector>
#include <cstdlib>
#include <random>

namespace discrete_mathematics {
    namespace chapter_8 {
        template <typename T>
        class Utility {
        public:
            Utility();
            ~Utility();

            std::vector<T> Get(int n, const T& s, const T& e);

            T Max(const T& a, const T& b);

        private:
            T m_random(const T& s, const T& e);
        };
    };
};

template <typename T>
discrete_mathematics::chapter_8::Utility<T>::Utility() {}

template <typename T>
discrete_mathematics::chapter_8::Utility<T>::~Utility() {}

template <typename T>
std::vector<T> discrete_mathematics::chapter_8::Utility<T>::Get(int n, const T& s, const T& e) {
    std::vector<T> list;
    for (int i = 0; i < n; ++i)
        list.push_back(m_random(s, e));

    return list;
}

template <typename T>
T discrete_mathematics::chapter_8::Utility<T>::Max(const T& a, const T& b) {
    return a > b ? a : b;
}

template <typename T>
T discrete_mathematics::chapter_8::Utility<T>::m_random(const T& s, const T& e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

#endif //DISCRETE_MATHEMATICS_CHAPTER_8_8_3_PROBLEM_23_UTILITY_H_

