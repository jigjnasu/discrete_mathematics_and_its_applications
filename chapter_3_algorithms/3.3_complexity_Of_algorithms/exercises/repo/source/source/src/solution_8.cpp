#include "solution_8.h"
#include <cstdio>
#include <ctime>
#include <cstdlib>

/*
  --------- Naive Power Algorithm ---------------------
  Time Complexity for naive power algorithm is O(n).
  This is the naive power algorithm, where power is caluclated by n times
  multiplying the base in a iterative manner.

  --------- Divide and Conquer Algorithm --------------
  Time Complexity for divide and conquer algorithm O(lg n).
  In this algorithm we divide the power factor by half till we reach the base condition
  of power == 1. and then calculate that and multiply it.
  In this way we can decrease the multilying factor significantly
*/

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_8::Solution_8() {}

dc::Solution_8::~Solution_8() {}

void dc::Solution_8::compare() const {
    const int x = 9;
    const int k = 10;
    printf("----------------- Naive Iterative Algorithm ----------------------\n");
    std::clock_t start = std::clock();
    printf("[%d] ^ [2] ^ [%d] == [%s]\n",
           x, k, m_naive_power(x, m_naive_power(2, k)).get().c_str());
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------\n");

    printf("----------------- Divide and Conquer Algorithm -------------------\n");
    start = std::clock();
    printf("[%d] ^ [2] ^ [%d] == [%s]\n",
           x, k, m_divide_and_conquer_power(x, m_divide_and_conquer_power(2, k)).get().c_str());
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------\n");
}

utility::integer::Integer dc::Solution_8::m_naive_power(utility::integer::Integer x,
                                                        utility::integer::Integer y) const {
    utility::integer::Integer result(1);
    for (int i = 0; y > i; ++i)
        result *= x;
    return result;
}

utility::integer::Integer dc::Solution_8::m_divide_and_conquer_power(utility::integer::Integer x,
                                                                     utility::integer::Integer y) const {
    if (y == 1) {
        return x;
    } else {
        const utility::integer::Integer temp = m_divide_and_conquer_power(x, y / 2);
        if (std::atoi(y.get_reverse().substr(0, 1).c_str()) % 2)
            return temp * temp * x;
        else
            return temp * temp;
    }
}
