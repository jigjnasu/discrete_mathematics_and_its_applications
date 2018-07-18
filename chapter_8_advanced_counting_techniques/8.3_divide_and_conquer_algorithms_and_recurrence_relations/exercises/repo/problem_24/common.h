/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 24
  Rakesh Kumar, cpp.rakesh@gmail.com
  18/07/2018
*/

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_COMMON_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_COMMON_H_

#include <bits/stdc++.h>

namespace discrete_mathematics {
    namespace chapter_8 {
        template <typename T>
            class Common {
        public:
            Common();
            ~Common();

            std::vector<std::pair<T, T>> get(int n);
            void print(const std::vector<std::pair<T, T>>& p);
            double euclidean_distance(const std::pair<T, T>& a,
                                      const std::pair<T, T>& b);
        };
    };
};

template <typename T>
T random(T s, T e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

template <typename T>
discrete_mathematics::chapter_8::Common<T>::Common() {}

template <typename T>
discrete_mathematics::chapter_8::Common<T>::~Common() {}

template <typename T>
std::vector<std::pair<T, T>> discrete_mathematics::chapter_8::Common<T>::get(int n) {
    std::vector<std::pair<T, T>> p;
    for (int i = 0; i < n; ++i)
        p.push_back(std::pair<T, T>(random(1, 99), random(1, 99)));
    return p;
}

template <typename T>
void discrete_mathematics::chapter_8::Common<T>::print(const std::vector<std::pair<T, T>>& p) {
    printf("-------------------------------------------------------\n");
    for (std::size_t i = 0;i < p.size(); ++i)
        printf("%2d.   (%2d, %2d)\n", i, p[i].first, p[i].second);
    printf("-------------------------------------------------------\n");
}

template <typename T>
double discrete_mathematics::chapter_8::Common<T>::euclidean_distance(const std::pair<T, T>& a,
                                                                      const std::pair<T, T>& b) {
    return std::sqrt(std::abs((b.first  - a.first)  * (b.first  - a.first) +
                              (b.second - a.second) * (b.second - a.second)));
}

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_COMMON_H_
