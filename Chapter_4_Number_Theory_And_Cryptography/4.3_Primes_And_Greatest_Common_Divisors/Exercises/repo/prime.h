/*
  Discrete Mathematics and it's Applications
  By Rosen H Kneeth
  It will have a brute force attack for finding whether, a number is prime or not.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: March, 18th, 2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_PRIME_H_
#define DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_PRIME_H_

#include <cmath>

namespace discrete_mathematics {
    namespace chapter_4 {
        template <typename T>
        class Prime {
        public:
            Prime();
            ~Prime();

            bool is_prime(T n) const;
        };
    };
};

namespace dc = discrete_mathematics::chapter_4;

template <typename T>
dc::Prime<T>::Prime() {}

template <typename T>
dc::Prime<T>::~Prime() {}

template <typename T>
bool dc::Prime<T>::is_prime(T n) const {
    for (std::size_t i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;

    return true;
}
#endif // DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_PRIME_H_
