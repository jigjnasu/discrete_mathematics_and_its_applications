#include "pseudo_random.h"
#include <cstdio>

int main() {
    // xn+1 = (3xn + 2) mod 13
    discrete_mathematics::chapter_4::PseudoRandom random;
    const std::vector<int> numbers = random.generate(13, 3, 2, 1);

    printf("-------------------------------------------------------\n");
    for (std::size_t i = 0; i < numbers.size(); ++i)
        printf("%d ", numbers[i]);
    printf("\n-------------------------------------------------------\n");

    return 0;
}
