/*
  Algorithm 1, Constructing Base b Expansions.
  Discrete Mathematics and It's Applications by Kenneth H Rosen
  Rakesh Kumar, cpp.rakesh(at)gmail.com
 */

#include <string>

namespace discrete_mathematics {
    namespace chapter_4 {
        enum Base {
            BINARY      = 2,
            OCTAL       = 8,
            DECIMAL     = 10,
            HEXADECIMAL = 16
        };
        
        class BaseConversion {
        public:
            BaseConversion();
            ~BaseConversion();

            std::string convert_to_base(int number, Base base) const;
            int convert_to_decimal(const std::string& number, Base base) const;

        private:
            void m_reverse(std::string& number) const;
            void m_swap(char& a, char& b) const;
            int m_power(int x, int y) const;
        };
    };
};
