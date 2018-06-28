#include "prime_numbers.h"
#include <map>

namespace dc = discrete_mathematics::chapter_4;

std::map<int, int> get_factors(int n, const std::vector<int>& primes) {
    std::map<int, int> factors;
    std::size_t i = 0;

    while (n && i < primes.size()) {
        while (n % primes[i] == 0) {
            ++factors[primes[i]];
            n /= primes[i];
        }
        ++i;
    }

    return factors;
}

void test_solution_3() {
    printf("--------------------------------------------------------\n");
    const std::vector<int> input = {88, 126, 729, 1001, 1111, 909090};
    dc::PrimeNumbers<int> prime;
    
    for (std::size_t i = 0; i < input.size(); ++i) {
        const std::map<int, int> factors = get_factors(input[i],
                                                       prime.prime_numbers(input[i] / 2));
        printf("--------------------------------------------------------\n");
        printf("[%d] factors are as follows:--\n", input[i]);
        for (std::map<int, int>::const_iterator it = factors.begin();
             it != factors.end(); ++it)
            printf("[%d] ^ [%d]\n", it->first, it->second);
        printf("\n--------------------------------------------------------\n");
    }
    printf("--------------------------------------------------------\n");
}

void test_solution_4() {
    printf("--------------------------------------------------------\n");
    const std::vector<int> input = {39, 81, 101, 143, 289, 899};
    dc::PrimeNumbers<int> prime;
    
    for (std::size_t i = 0; i < input.size(); ++i) {
        const std::map<int, int> factors = get_factors(input[i],
                                                       prime.prime_numbers(input[i] / 2));
        printf("--------------------------------------------------------\n");
        printf("[%d] factors are as follows:--\n", input[i]);
        for (std::map<int, int>::const_iterator it = factors.begin();
             it != factors.end(); ++it)
            printf("[%d] ^ [%d]\n", it->first, it->second);
        printf("\n--------------------------------------------------------\n");
    }
    printf("--------------------------------------------------------\n");
}

int main() {
    test_solution_3();
    test_solution_4();

    return 0;
}
