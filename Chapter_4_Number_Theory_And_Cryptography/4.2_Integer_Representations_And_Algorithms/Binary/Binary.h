/*
  Discrete Mathematics and it's Applications
  Dr. Rosen H Kneeth
  Implementation of a Binary number representation and it's operations.
  Binary number addition, subtraction, multiplication and comparisions.

  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: March 16th, 2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_4_4_2_ALGORITHMS_INC_BINARY_H_
#define DISCRETE_MATHEMATICS_CHAPTER_4_4_2_ALGORITHMS_INC_BINARY_H_

#include <string>

namespace discrete_mathematics {
    namespace chapter_4 {
        class Binary {
        public:
            Binary();
            Binary(int n);
            Binary(const std::string& n);
            Binary(const Binary& rhs);
            ~Binary();

            Binary& operator = (const Binary& rhs);

            Binary operator + (const Binary& rhs) const;
            Binary operator - (const Binary& rhs) const;
            Binary operator * (const Binary& rhs) const;

            void operator += (const Binary& rhs);
            void operator -= (const Binary& rhs);
            void operator *= (const Binary& rhs);

            bool operator > (const Binary& rhs) const;
            bool operator < (const Binary& rhs) const;

            bool operator == (const Binary& rhs) const;
            bool operator != (const Binary& rhs) const;

            int decimal() const;
            
            void print() const;

        private:
            std::string m_data;

            Binary m_min(const Binary& a, const Binary& b) const;
            Binary m_max(const Binary& a, const Binary& b) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_4_4_2_ALGORITHMS_INC_BINARY_H_
