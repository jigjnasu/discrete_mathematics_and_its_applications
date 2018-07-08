#include "solution_15.h"
#include <cstdio>
#include <cmath>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_15::Solution_15() : m_base(std::pow(10, 9)) {}

dc::Solution_15::~Solution_15() {}

void dc::Solution_15::compute() const {
    printf("f(lg n )  == [%s]\n", m_fn_a().c_str());
    printf("f( n )    == [%.0f]\n", m_fn_b());
    printf("f(n lg n) == [%f]\n", m_fn_c());
    printf("f(n ^ 2 ) == [%f]\n", m_fn_d());
    printf("f(2 ^ n)  == [%f]\n", m_fn_e());
    printf("f(n!)     == [%d]\n", m_fn_f());
}

std::string dc::Solution_15::m_fn_a() const {
    return std::string("2 ^ 10 ^ 9");
}

double dc::Solution_15::m_fn_b() const {
    return m_base;
}

double dc::Solution_15::m_fn_c() const {
    return m_base / (std::log(m_base) / std::log(2));
}

double dc::Solution_15::m_fn_d() const {
    return std::pow(10, 4.5);
}

double dc::Solution_15::m_fn_e() const {
    return log(m_base) / log(2);
}

int dc::Solution_15::m_fn_f() const {
    int n = 1;
    while (m_factorial(n) < m_base)
        ++n;

    return n;
}

int dc::Solution_15::m_factorial(int n) const {
    int factorial = 1;
    for (int i = 2; i <= n; ++i)
        factorial *= i;
    return factorial;
}
