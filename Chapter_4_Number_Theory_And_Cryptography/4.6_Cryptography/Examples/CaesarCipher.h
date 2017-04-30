/*
  Discrete Mathematics and It's Applications.
  Chapter 4, Number Theory and Cryptography.
  4.6 Cryptography
  This is one of the first encrypted message, by Julias Cesar

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 01/05/2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_4_4_6_CAESARCIPHER_H_
#define DISCRETE_MATHEMATICS_CHAPTER_4_4_6_CAESARCIPHER_H_

#include <string>
#include <vector>

namespace discrete_mathematics {
    namespace chapter_4 {
        class CaesarCipher {
        public:
            CaesarCipher();
            CaesarCipher(int key);
            ~CaesarCipher();

            std::vector<int> encrypt(const std::string& message) const;
            std::string decrypt(const std::vector<int>& message) const;

        private:
            int m_key;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_4_4_6_CAESARCIPHER_H_
