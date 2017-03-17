/*
  Discrete Mathematics and it's Applications
  By Rosen H Kneeth
  Solution for problem 1, 4.2 chapter Primes and Greatest Common Divisors.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: March, 18th, 2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_GCD_H_
#define DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_GCD_H_

namespace discrete_mathematics {
    namespace chapter_4 {
        template <typename T>
        class GCD {
        public:
            GCD();
            ~GCD();

            T gcd(T a, T b) const;
        };
    };
};

namespace dc = discrete_mathematics::chapter_4;

template <typename T>
dc::GCD<T>::GCD() {}

template <typename T>
dc::GCD<T>::~GCD() {}

template <typename T>
T dc::GCD<T>(T a, T b) const {
    while (a % b != 0) {
        const T t = a % b;
        a = b;
        b = t;
    }

    return b;
}

#endif // DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_GCD_H_
