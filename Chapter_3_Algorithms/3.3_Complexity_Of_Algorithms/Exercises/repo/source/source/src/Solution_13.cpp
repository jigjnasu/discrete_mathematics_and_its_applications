#include "Solution_13.h"
#include "Maths.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_13::Solution_13() {}

dc::Solution_13::~Solution_13() {}

void dc::Solution_13::polynomial(const std::vector<int>& a, int x) const {
    printf("----------------------------- Input -----------------------------\n");
    m_print(a);
    printf("--------------------------- Polynomial --------------------------\n");
    m_print_polynomial(a);

    printf("----------------- Result x == [%d] -------------------------------\n", x);
    utility::integer::Integer result = 0;
    for (std::size_t i = 0; i < a.size(); ++i)
        result += m_compute(a[i], x, i);
    printf("Polynomial result == [%s]\n", result.get().c_str());
}

utility::integer::Integer dc::Solution_13::m_compute(int a, int x, int y) const {
    utility::maths::Maths<int> maths;
    utility::integer::Integer r = maths.power(x, y);
    return r * a;
}

void dc::Solution_13::m_print(const std::vector<int>& a) const {
    for (std::size_t i = 0; i < a.size(); ++i)
        printf("%d ", a[i]);
    printf("\n");
}

void dc::Solution_13::m_print_polynomial(const std::vector<int>& a) const {
    for (int i = a.size() - 1; i > 0; --i)
        printf("%dx ^ %d + ", a[i], i);
    printf("%d\n", a[0]);
}

