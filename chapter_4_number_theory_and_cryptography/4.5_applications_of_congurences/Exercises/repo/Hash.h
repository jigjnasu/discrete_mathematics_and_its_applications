/*
  Discrete Mathematics and it's Applications
  By Rosen H Kneeth
  This is a hash function, which will return location number by modulo m.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April, 29th, 2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_HASH_H_
#define DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_HASH_H_

#include <vector>

namespace discrete_mathematics {
    namespace chapter_4 {
        class Hash {
        public:
            Hash();
            Hash(int m);
            ~Hash();

            int location(int key);

        private:
            int m_mod;
            std::vector<int> m_memory;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER4_4_5_EXERCISES_HASH_H_
