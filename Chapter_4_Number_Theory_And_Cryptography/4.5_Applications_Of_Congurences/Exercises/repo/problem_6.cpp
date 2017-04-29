#include "PseudoRandom.h"
#include <cstdio>

int main() {
    // xn+1 = (4xn + 1) mod 7, x0 = 3
    discrete_mathematics::chapter_4::PseudoRandom random;
    const std::vector<int> numbers = random.generate(7, 4, 1, 3);

    printf("-------------------------------------------------------\n");
    for (std::size_t i = 0; i < numbers.size(); ++i)
        printf("%d ", numbers[i]);
    printf("\n-------------------------------------------------------\n");
    
    return 0;
}
