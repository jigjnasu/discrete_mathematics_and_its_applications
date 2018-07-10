#include "base_conversion.h"

namespace dc = discrete_mathematics::chapter_4;

const std::string hexadecimal_values = "0123456789ABCDEF";

dc::BaseConversion::BaseConversion() {}

dc::BaseConversion::~BaseConversion() {}

std::string dc::BaseConversion::convert_to_base(int number, Base base) const {
    std::string num;
    while (number != 0) {
        const int r = number % base;
        if (base == Base::HEXADECIMAL)
            num.push_back(hexadecimal_values[r]);
        else
            num.push_back(r + '0');
        number /= base;
    }

    t_reverse(num);
    return num;
}

int dc::BaseConversion::convert_to_decimal(const std::string& number, Base base) const {
    int n = 0;

    int p = 0;
    for (int i = number.size() - 1; i >= 0; --i)
        if (base == dc::Base::HEXADECIMAL)
            n += (t_power(base, p++) * hexadecimal_values.find(number[i]));
        else
            n += (t_power(base, p++) * (number[i] - '0'));

    return n;
}

void dc::BaseConversion::t_reverse(std::string& number) const {
    int i = 0;
    int j = number.size() - 1;

    while (i < j) {
        t_swap(number[i], number[j]);
        ++i;
        --j;
    }
}

void dc::BaseConversion::t_swap(char& a, char& b) const {
    const char c = a;
    a = b;
    b = c;
}

int dc::BaseConversion::t_power(int x, int y) const {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        const int t = t_power(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}
