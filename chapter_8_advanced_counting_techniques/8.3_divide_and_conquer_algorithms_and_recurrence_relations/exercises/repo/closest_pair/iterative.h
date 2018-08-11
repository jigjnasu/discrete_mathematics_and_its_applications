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

namespace discrete_mathematics {
    namespace chapter_8 {
        template <typename T>
        class Iterative {
        public:
            Iterative();
            ~Iterative();

            double closest(const std::vector<std::pair<T, T>>& p);
        };
    };
};

template <typename T>
discrete_mathematics::chapter_8::Iterative<T>::Iterative() {}

template <typename T>
discrete_mathematics::chapter_8::Iterative<T>::~Iterative() {}

template <typename T>
double discrete_mathematics::chapter_8::Iterative<T>::closest(const std::vector<std::pair<T, T>>& p) {
    discrete_mathematics::chapter_8::Common<T> common;
    double min = common.euclidean_distance(p[0], p[1]);
    for (std::size_t i = 0; i < p.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < p.size(); ++j) {
            const double m = common.euclidean_distance(p[i], p[j]);
            if (m < min)
                min = m;
        }
    }

    return min;
}


#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_8_8_3_DIVIDE_AND_CONQUER_ALGORITHMS_AND_RECURRENCE_RELATIONS_EXERCISES_REPO_ITERATIVE_H_
