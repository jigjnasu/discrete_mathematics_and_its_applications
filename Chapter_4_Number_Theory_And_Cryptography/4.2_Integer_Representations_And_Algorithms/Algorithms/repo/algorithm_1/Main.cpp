#include "BaseConversion.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_4;

int random(int min, int max) {
    return min + rand() % (max - min) + 1;
}

// Testing binary number
void test_binary() {
    int min = 1;
    int max = 1000000;

    dc::BaseConversion conversion;
    printf("--------------------------  Binary Numbers  -----------------------------\n");
    for (int i = 0; i < 5; ++i) {
        const int number = random(min, max);
        const std::string n = conversion.convert_to_base(number, dc::Base::BINARY);
        printf("Decimal to Binary || [%20d] == [%20s]\n", number, n.c_str());
        printf("Binary to Decimal || [%20s] == [%20d]\n", n.c_str(),
               conversion.convert_to_decimal(n, dc::Base::BINARY));
    }
    printf("-------------------------------------------------------------------------\n");
}

// Testing octal number
void test_octal() {
    int min = 1;
    int max = 1000000;

    dc::BaseConversion conversion;
    printf("---------------------------  Octal Numbers  -----------------------------\n");
    for (int i = 0; i < 5; ++i) {
        const int number = random(min, max);
        const std::string n = conversion.convert_to_base(number, dc::Base::OCTAL);
        printf("Decimal to Octal || [%20d] == [%20s]\n", number, n.c_str());
        printf("Octal to Decimal || [%20s] == [%20d]\n", n.c_str(),
               conversion.convert_to_decimal(n, dc::Base::OCTAL));
    }
    printf("-------------------------------------------------------------------------\n");    
}

// Testing hexadecimal number
void test_hexadecimal() {
    int min = 1;
    int max = 1000000;

    dc::BaseConversion conversion;
    printf("----------------------- Hexadecimal Numbers  ----------------------------\n");
    for (int i = 0; i < 5; ++i) {
        const int number = random(min, max);
        const std::string n = conversion.convert_to_base(number, dc::Base::HEXADECIMAL);
        printf("Decimal to Hexadecimal || [%20d] == [%20s]\n", number, n.c_str());
        printf("Hexadecimal to Decimal || [%20s] == [%20d]\n", n.c_str(),
               conversion.convert_to_decimal(n, dc::Base::HEXADECIMAL));
    }
    printf("-------------------------------------------------------------------------\n");    
}

int main() {
    test_binary();
    test_octal();
    test_hexadecimal();

    return 0;
}
