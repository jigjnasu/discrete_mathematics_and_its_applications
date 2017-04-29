#include "PseudoRandom.h"

discrete_mathematics::chapter_4::PseudoRandom::PseudoRandom() {}

discrete_mathematics::chapter_4::PseudoRandom::~PseudoRandom() {}

std::vector<int> discrete_mathematics::chapter_4::PseudoRandom::generate(int m, int a, int c, int x) const {
    std::vector<int> numbers = {x};
    for (int i = 0; i < 30; ++i) {
        x = (x * a + c) % m;
        numbers.push_back(x);
    }

    return numbers;
}
