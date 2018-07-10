#ifndef DISCRETE_MATHEMATICS_CHAPTER_4_INTEGER_REPRESENTATION_AND_ALGORITMS_CONVERSION_H_
#define DISCRETE_MATHEMATICS_CHAPTER_4_INTEGER_REPRESENTATION_AND_ALGORITMS_CONVERSION_H_

/*
  Conversion of Octal and Hexadecimal to Binary and vice versa
  Discrete Mathematics and It's Applications by Kenneth H Rosen
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date March 5th, 2017
 */

#include "base_conversion.h"
#include <string>

namespace discrete_mathematics {
    namespace chapter_4 {
        class Conversion : public BaseConversion {
        public:
            Conversion();
            ~Conversion();

            std::string to_base(std::string& number, Base base) const;
            std::string to_binary(const std::string& number, Base base) const;

        private:
            std::string m_to_octal(std::string& number) const;
            std::string m_to_hexadecimal(const std::string& number) const;
            std::string m_to_binary(int number, Base base) const;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_4_INTEGER_REPRESENTATION_AND_ALGORITMS_CONVERSION_H_
