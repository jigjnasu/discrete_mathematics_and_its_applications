#include "solution_33.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_33::Solution_33() {}

dc::Solution_33::~Solution_33() {}

bool dc::Solution_33::is_palindrome(const std::string& input) const {
    int i = 0;
    int j = input.size() - 1;

    while (i < j)
        if (input[i++] != input[j--])
            return false;
    return true;
}
