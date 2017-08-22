/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.6 Generating Permutations and Combinations
  Algorithm 3
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  22/08/2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_3_H_
#define DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_3_H_

#include <iostream>
#include <vector>

namespace discrete_mathematics {
    namespace algorithms {
        template <typename T>
        class Combination {
        public:
            Combination();
            ~Combination();
            void Next(std::vector<T>& n, std::vector<T>& r);
        };
    };
};

template <typename T>
discrete_mathematics::algorithms::Combination<T>::Combination() {}

template <typename T>
discrete_mathematics::algorithms::Combination<T>::~Combination() {}

template <typename T>
void discrete_mathematics::algorithms::Combination<T>::Next(std::vector<T>& n, std::vector<T>& r) {
    int i = r.size() - 1;
    while (r[i] > n.size() - r.size() + i)
        --i;

    if (i >= 0)
        r[i] += 1;
    for (int j = i; j < r.size(); ++j)
        r[j] = r[i] + (j - i);
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_3_H_
