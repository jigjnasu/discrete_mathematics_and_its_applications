#include "conversion.h"

namespace dc = discrete_mathematics::chapter_4;

const std::string value = "0123456789ABCDEF";

dc::Conversion::Conversion() {}

dc::Conversion::~Conversion() {}

std::string dc::Conversion::to_base(std::string& number, Base base) const {
    if (dc::Base::OCTAL == base)
        return m_to_octal(number);
    else
        return m_to_hexadecimal(number);
}

std::string dc::Conversion::to_binary(const std::string& number, Base base) const {
    std::string n;
    for (std::size_t i = 0; i < number.size(); ++i)
        n += m_to_binary(value.find(number[i]), base);

    return n;
}

std::string dc::Conversion::m_to_octal(std::string& number) const {
    const int base = 3;
    std::string n;
    int i = number.size() % base;

    if (i)
        n.push_back((convert_to_decimal(number.substr(0, i), dc::Base::BINARY)) + '0');

    while (i < number.size()) {
        n.push_back((convert_to_decimal(number.substr(i, base), dc::Base::BINARY)) + '0');
        i += base;
    }

    return n;
}

std::string dc::Conversion::m_to_hexadecimal(const std::string& number) const {
    const int base = 4;
    std::string n;
    int i = number.size() % base;

    if (i)
        n.push_back(value[convert_to_decimal(number.substr(0, i), dc::Base::BINARY)]);

    while (i < number.size()) {
        n.push_back(value[convert_to_decimal(number.substr(i, base), dc::Base::BINARY)]);
        i += base;
    }

    return n;
}

std::string dc::Conversion::m_to_binary(int number, Base base) const {
    std::string n;

    while (number) {
        n.push_back((number % 2) + '0');
        number /= 2;
    }

    int size = 0;
    if (dc::Base::OCTAL == base)
        size = 3;
    else
        size = 4;

    std::size_t gap = size - n.size();
    for (int i = 0; i < gap; ++i)
        n.push_back('0');

    t_reverse(n);

    return n;
}
