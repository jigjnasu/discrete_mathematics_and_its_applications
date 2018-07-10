#include "power_random.h"

discrete_mathematics::chapter_4::PowerRandom::PowerRandom() {}

discrete_mathematics::chapter_4::PowerRandom::~PowerRandom() {}

std::vector<int> discrete_mathematics::chapter_4::PowerRandom::generate(int p, int d, int x) const {
    std::vector<int> numbers = {x};
    // Lets calculate mod by little fermat theroem.
    // x ^ p - 1 = 1 mod p
    for (int i = 0; i < 10; ++i) {
        x = m_power(x, (d % (p - 1))) % p;
        numbers.push_back(x);
    }

    return numbers;
}


int discrete_mathematics::chapter_4::PowerRandom::m_power(int x, int y) const {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        const int t = m_power(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}
