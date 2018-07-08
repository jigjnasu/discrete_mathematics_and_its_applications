#include "solution_14.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_14::Solution_14() {}

dc::Solution_14::~Solution_14() {}

void dc::Solution_14::polynomial(const std::vector<int>& a, int x) const {
    printf("----------------------------- Input -----------------------------\n");
    m_print(a);
    printf("--------------------------- Polynomial --------------------------\n");
    m_print_polynomial(a);

    printf("----------------- Result x == [%d] -------------------------------\n", x);
    printf("Polynomial result == [%s]\n", m_compute(a, x).get().c_str());
}

utility::integer::Integer dc::Solution_14::m_compute(const std::vector<int>& a, int x) const {
    utility::integer::Integer y = 0;
    for (int i = a.size() - 1; i >= 0; --i)
        y = (y * x) + a[i];

    return y;
}

void dc::Solution_14::m_print(const std::vector<int>& a) const {
    for (std::size_t i = 0; i < a.size(); ++i)
        printf("%d ", a[i]);
    printf("\n");
}

void dc::Solution_14::m_print_polynomial(const std::vector<int>& a) const {
    for (int i = a.size() - 1; i > 0; --i)
        printf("%dx ^ %d + ", a[i], i);
    printf("%d\n", a[0]);
}

