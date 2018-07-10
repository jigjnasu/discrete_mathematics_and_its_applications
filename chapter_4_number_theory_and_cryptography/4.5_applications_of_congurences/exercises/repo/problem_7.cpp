#include "pseudo_random.h"
#include <cstdio>

int main() {
    // xn+1 = (3xn + 0) mod 11, x0 = 2
    discrete_mathematics::chapter_4::PseudoRandom random;
    const std::vector<int> numbers = random.generate(11, 3, 0, 2);

    printf("-------------------------------------------------------\n");
    for (std::size_t i = 0; i < numbers.size(); ++i)
        printf("%d ", numbers[i]);
    printf("\n-------------------------------------------------------\n");

    return 0;
}
