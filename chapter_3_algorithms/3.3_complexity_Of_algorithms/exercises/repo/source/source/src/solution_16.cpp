#include "solution_16.h"
#include <cstdio>
#include <cmath>

namespace dc = discrete_mathematics::chapter_3;

// This is converting 1
dc::Solution_16::Solution_16() : m_base(24 * 60 * 60 * std::pow(10, 11)) {}

dc::Solution_16::~Solution_16() {}

void dc::Solution_16::compute() const {
    printf("f(lg n)       || n == [%s]\n", m_f_a().c_str());
    printf("f(1000n)      || n == [%lu]\n", m_f_b());
    printf("f(n ^ 2)      || n == [%f]\n", m_f_c());
    printf("f(1000.n ^ 2) || n == [%f]\n", m_f_d());
    printf("f(n ^ 3)      || n == [%f]\n", m_f_e());
    printf("f(2 ^ n)      || n == [%f]\n", m_f_f());
    printf("f(2 ^ 2.n)    || n == [%f]\n", m_f_g());
    printf("f(2 ^ 2 ^ n   || n == [%f]\n", m_f_h());
}

std::string dc::Solution_16::m_f_a() const {
    return std::string("2 ^ 24 * 60 * 60 * 10 ^ 11");
}

std::size_t dc::Solution_16::m_f_b() const {
    return m_base / 1000;
}

double dc::Solution_16::m_f_c() const {
    return std::sqrt(m_base);
}

double dc::Solution_16::m_f_d() const {
    return std::sqrt(m_base / 1000);
}

double dc::Solution_16::m_f_e() const {
    return std::cbrt(m_base);
}

double dc::Solution_16::m_f_f() const {
    return std::log(m_base) / std::log(2);
}

double dc::Solution_16::m_f_g() const {
    return (std::log(m_base) / std::log(2)) / 2;
}

double dc::Solution_16::m_f_h() const {
    const double temp = std::log(m_base) / std::log(2);
    return std::log(temp) / std::log(2);
}
