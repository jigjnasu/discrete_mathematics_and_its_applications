/*
  This class contains some of the common functionality used in all the exercises here.
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 19th, Jan 2017
*/

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_COMMON_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_COMMON_H_

#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>

namespace discrete_mathematics {
    namespace chapter_3 {
        template <typename T>
        class Common {
        public:
            Common();
            ~Common();

            // return a random number between min and max, both included
            int random(int min, int max) const;

            // print the vector
            void print(const std::vector<T>& V) const;

            // print the set
            void print(const std::set<T>& S) const;

            // Build a random vector of n elements between min and max elements
            std::vector<T> build_vector(int n, int min, int max) const;

            // Build a random set of n elements between min and max.
            std::set<T> build_set(int n, int min, int max) const;
        };
    };
};

namespace dc = discrete_mathematics::chapter_3;

template <typename T>
dc::Common<T>::Common() {}

template <typename T>
dc::Common<T>::~Common() {}

template <typename T>
int dc::Common<T>::random(int min, int max) const {
    return min + rand() % (max - min + 1);
}

template <typename T>
void dc::Common<T>::print(const std::vector<T>& V) const {
    for (std::size_t i = 0; i < V.size(); ++i)
        std::cout << V[i] << " ";
    std::cout << std::endl;
}

template <typename T>
void dc::Common<T>::print(const std::set<T>& S) const {
    for (typename std::set<T>::const_iterator it = S.begin();
         it != S.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename T>
std::vector<T> dc::Common<T>::build_vector(int n, int min, int max) const {
    std::vector<T> list;
    for (int i = 0; i < n; ++i)
        list.push_back(random(min, max));
    return list;
}

template <typename T>
std::set<T> dc::Common<T>::build_set(int n, int min, int max) const {
    std::set<T> list;
    for (int i = 0; i < n; ++i)
        list.insert(random(min, max));
    return list;
}

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_COMMON_H_
