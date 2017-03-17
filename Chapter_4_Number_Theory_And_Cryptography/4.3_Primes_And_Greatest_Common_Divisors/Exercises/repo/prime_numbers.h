/*
  Discrete Mathematics and it's Applications
  By Rosen H Kneeth
  It will return number of prime numbers beween 2 and n.
  This algorithm is based on famous, sieve of eratosthenes.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: March, 18th, 2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_PRIME_NUMBERS_H_
#define DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_PRIME_NUMBERS_H_

#include <vector>
#include <cmath>

namespace discrete_mathematics {
    namespace chapter_4 {
        template <typename T>
        class PrimeNumbers {
        public:
            PrimeNumbers();
            ~PrimeNumbers();

            std::vector<T> prime_numbers(T n) const;
        };
    };
};

namespace dc = discrete_mathematics::chapter_4;

template <typename T>
dc::PrimeNumbers<T>::PrimeNumbers() {}

template <typename T>
dc::PrimeNumbers<T>::~PrimeNumbers() {}

// This algorithm is based on Sieve Of Eratoshenes
template <typename T>
std::vector<T> dc::PrimeNumbers<T>::prime_numbers(T n) const {
    std::vector<T> primes;
    for (std::size_t i = 0; i <= n; ++i)
        primes.push_back(i);

    const std::size_t limit = std::sqrt(n);
    for (std::size_t i = 2; i <= limit; ++i)
        if (primes[i])
            for (std::size_t j = i * 2; j <= n; j += i)
                primes[j] = 0;

    std::vector<T> numbers;
    for (std::size_t i = 2; i < primes.size(); ++i)
        if (primes[i])
            numbers.push_back(primes[i]);

    return numbers;
}

#endif // DISCRETE_MATHEMATICS_CHAPTER4_4_3_EXERCISES_PRIME_NUMBERS_H_
