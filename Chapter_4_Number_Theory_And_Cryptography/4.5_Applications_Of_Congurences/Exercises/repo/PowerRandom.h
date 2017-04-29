/*
  Discrete Mathematics and it's Applications
  By Rosen H Kneeth
  This is a Power Random Generator
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April, 29th, 2017
*/

/*
  xn + 1 = xn ^ d mod p,
  where, p is a prime number and d is a positive integer
  and gcd(p, d) = 1.
 */

#include <vector>

#ifndef DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_POWERRANDOM_H_
#define DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_POWERRANDOM_H_

namespace discrete_mathematics {
    namespace chapter_4 {
        class PowerRandom {
        public:
            PowerRandom();
            ~PowerRandom();

            /*
              p = prime number
              d = positive integer, d not divides p
              x = initial number
            */

            std::vector<int> generate(int p, int d, int x) const;

        private:
            int m_power(int x, int y) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_POWERRANDOM_H_
