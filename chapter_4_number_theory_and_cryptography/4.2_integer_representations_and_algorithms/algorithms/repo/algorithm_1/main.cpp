#include "base_conversion.h"
#include "conversion.h"
#include <cstdio>
#include <random>

namespace dc = discrete_mathematics::chapter_4;

int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
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

// Test Binary Octal
void test_binary_octal() {
    int min = 1;
    int max = 1000000;

    dc::BaseConversion base_conversion;
    dc::Conversion conversion;

    printf("-----------------------  Binary to Octal  -------------------------------\n");
    for (int i = 0; i < 5; ++i) {
        const int number = random(min, max);
        printf("%d\n", number);
        std::string n = base_conversion.convert_to_base(number, dc::Base::BINARY);
        std::string r = conversion.to_base(n, dc::Base::OCTAL);
        printf("Binary == [%30s] || Octal == [%20s]\n",
               n.c_str(), r.c_str());
        printf("Binary == [%30s] || Octal == [%20s]\n",
               conversion.to_binary(r, dc::Base::OCTAL).c_str(), r.c_str());
    }
    printf("-------------------------------------------------------------------------\n");
}

// Test Binary Hexadecimal
void test_binary_hexadecimal() {
    int min = 1;
    int max = 1000000;

    dc::BaseConversion base_conversion;
    dc::Conversion conversion;

    printf("-------------------  Binary to Hexadecimal  -----------------------------\n");

    for (int i = 0; i < 5; ++i) {
        const int number = random(min, max);
        printf("%d\n", number);
        std::string n = base_conversion.convert_to_base(number, dc::Base::BINARY);
        std::string r = conversion.to_base(n, dc::Base::HEXADECIMAL);
        printf("Binary == [%30s] || Octal == [%20s]\n",
               n.c_str(), r.c_str());
        printf("Binary == [%30s] || Octal == [%20s]\n",
               conversion.to_binary(r, dc::Base::HEXADECIMAL).c_str(), r.c_str());
    }

    printf("-------------------------------------------------------------------------\n");
}

int main() {
    test_binary();
    test_octal();
    test_hexadecimal();
    test_binary_octal();
    test_binary_hexadecimal();

    return 0;
}
