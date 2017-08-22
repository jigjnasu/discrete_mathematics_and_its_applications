/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.6 Generating Permutations and Combinations
  Algorithm 2
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  22/08/2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_2_H_
#define DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_2_H_

#include <cstdio>
#include <string>

namespace discrete_mathematics {
    namespace algorithms {
        class BitString {
        public:
            BitString();
            ~BitString();
            void Next(std::string& n);
        };
    };
};

discrete_mathematics::algorithms::BitString::BitString() {}

discrete_mathematics::algorithms::BitString::~BitString() {}

void discrete_mathematics::algorithms::BitString::Next(std::string& n) {
    int k = n.size() - 1;
    while (n[k] == '1')
        --k;
    if (k < 0)
        return;
    n[k] = '1';
    for (int i = k + 1; i < n.size(); ++i)
        n[i] = '0';
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_2_H_
