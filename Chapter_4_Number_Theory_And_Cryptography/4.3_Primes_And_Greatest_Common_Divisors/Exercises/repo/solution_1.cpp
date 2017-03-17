#include "prime.h"
#include <cstdio>
#include <vector>

namespace dc = discrete_mathematics::chapter_4;

void test_solution_1() {
    const std::vector<int> input = {21, 29, 71, 97, 111, 143};
    dc::Prime<int> prime;

    printf("-------------------------------------------------\n");
    for (std::size_t i = 0; i < input.size(); ++i)
        if (prime.is_prime(input[i]))
            printf("[%d] is a prime number\n", input[i]);
        else
            printf("[%d] is NOT a prime number\n", input[i]);
    printf("-------------------------------------------------\n");
}

void test_solution_2() {
    const std::vector<int> input = {19, 27, 93, 101, 107, 113};
    dc::Prime<int> prime;

    printf("-------------------------------------------------\n");
    for (std::size_t i = 0; i < input.size(); ++i)
        if (prime.is_prime(input[i]))
            printf("[%d] is a prime number\n", input[i]);
        else
            printf("[%d] is NOT a prime number\n", input[i]);
    printf("-------------------------------------------------\n");    
}

int main() {
    test_solution_1();
    test_solution_2();

    return 0;
}
