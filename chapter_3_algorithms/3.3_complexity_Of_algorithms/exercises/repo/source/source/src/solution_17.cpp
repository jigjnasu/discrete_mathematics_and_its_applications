#include "solution_17.h"
#include <cstdio>
#include <cmath>

namespace dc = discrete_mathematics::chapter_3;

// 1 second = 10 ^ 12, 1 minute = 60 * 10 ^ 12
dc::Solution_17::Solution_17() : m_base(60 * std::pow(10, 12)) {}

dc::Solution_17::~Solution_17() {}

void dc::Solution_17::compute() const {
    printf("f(lg lg n)    || n == [%s]\n", m_f_a().c_str());
    printf("f(lg n)       || n == [%s]\n", m_f_b().c_str());
    printf("f(lg n)       || n == [%s]\n", m_f_c().c_str());
    printf("f(1000000 n)  || n == [%lu]\n", m_f_d());
    printf("f(n ^ 2)      || n == [%f]\n", m_f_e());
    printf("f(2 ^ n)      || n == [%f]\n", m_f_f());
    printf("f(2 ^ n ^ 2)  || n == [%f]\n", m_f_g());
}

std::string dc::Solution_17::m_f_a() const {
    return std::string("2 ^ 2 ^ 60 . 10 ^ 12");
}

std::string dc::Solution_17::m_f_b() const {
    return std::string("2 ^ 60 . 10 ^ 12");
}

std::string dc::Solution_17::m_f_c() const {
    return std::string("2 ^ 30 . 10 ^ 12");
}

std::size_t dc::Solution_17::m_f_d() const {
    return m_base / 1000000;
}

double dc::Solution_17::m_f_e() const {
    return std::sqrt(m_base);
}

double dc::Solution_17::m_f_f() const {
    return std::log(m_base) / std::log(2);
}

double dc::Solution_17::m_f_g() const {
    return std::sqrt(std::log(m_base) / std::log(2));
}
