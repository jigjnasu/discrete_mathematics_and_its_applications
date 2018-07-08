#include "solution_9.h"
#include <cstdio>

/*
  -------------- Iterative algortihm --------------------
  it will go for all the bits in an iterative manner and check for 1.
  Therefore, it will have O(n) time complexity.
*/

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_9::Solution_9() {}

dc::Solution_9::~Solution_9() {}

int dc::Solution_9::number_of_ones(int n) const {
    int counter = 0;
    int i = 0;
    while ((1 << i) <= n) {
        if ((1 << i) & n)
            ++counter;
        ++i;
    }
    return counter;
}
