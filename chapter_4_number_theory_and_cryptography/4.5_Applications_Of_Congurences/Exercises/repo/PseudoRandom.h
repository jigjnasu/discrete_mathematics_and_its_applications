/*
  Discrete Mathematics and it's Applications
  By Rosen H Kneeth
  This is a Pseudo Random Generator
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April, 29th, 2017
*/

#include <vector>

#ifndef DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_PSEUDORANDOM_H_
#define DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_PSEUDORANDOM_H_

namespace discrete_mathematics {
    namespace chapter_4 {
        class PseudoRandom {
        public:
            PseudoRandom();
            ~PseudoRandom();

            /*
              m = modulo
              a = multiplier
              c = increment
              x = initial value
            */

            std::vector<int> generate(int m, int a, int c, int x) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_PSEUDORANDOM_H_
