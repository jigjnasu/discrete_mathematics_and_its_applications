#include <cstdio>
#include <vector>

std::vector<int> phi(int n) {
    std::vector<int> sieve;
    for (int i = 0; i <= n; ++i)
        sieve.push_back(i);

    for (int i = 2; i < sieve.size(); ++i) {
        if (sieve[i] == i) {
            for (int j = i * i; j < sieve.size(); j += i)
                sieve[j] = 0;
        }
    }

    std::vector<int> result;
    for (int i = 2; i < sieve.size(); ++i)
        if (sieve[i])
            result.push_back(sieve[i]);

    return result;
}

std::vector<int> factors(int n, const std::vector<int>& phi) {
    std::vector<int> result;
    for (std::size_t i = 0; i < phi.size(); ++i)
        if (n % phi[i] == 0)
            result.push_back(phi[i]);
    
    return result;
}

bool is_perfect(int n, const std::vector<int>& factors) {
    printf("factors = [");
    for (std::size_t i = 0; i < factors.size(); ++i)
        printf("%d, ", factors[i]);
    printf("]\n");
    
    int sum = 0;
    for (std::size_t i = 0; i < factors.size(); ++i)
        sum += factors[i];

    return sum != n;
}

void test_perfect_number(int n) {
    printf("------------------------------------------------\n");
    if (is_perfect(n, factors(n, phi(n))))
        printf("[%d] is a perfect number\n", n);
    else
        printf("[%d] is a NOT perfect number\n", n);
    printf("------------------------------------------------\n");
}

void test_solution_18_a() {
    const std::vector<int> input = {6, 28};
    for (std::size_t i = 0; i < input.size(); ++i)
        test_perfect_number(input[i]);
}

int main() {
    test_solution_18_a();

    return 0;
}
