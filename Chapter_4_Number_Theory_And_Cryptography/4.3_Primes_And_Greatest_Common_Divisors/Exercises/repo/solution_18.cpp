#include <cstdio>
#include <cmath>
#include <vector>

bool is_prime(int n) {
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
    
    return true;
}

int power(int x, int y) {
    if (y == 1) {
        return x;
    } else {
        const int t = power(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}

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

void test_solution_18_b() {
    for (int p = 2; p <= 15; ++p) {
        const int pow = power(2, p);
        if (is_prime(pow - 1)) {
            printf("-----------------------------------------------------\n");
            printf("(2 ^ [%d] - 1) == [%d] is a prime number\n", p, pow - 1);
            const int n = (pow / 2) * (pow - 1);
            if (is_perfect(n, factors(n, phi(n)))) {
                printf("[%d] is a perfect number with factors\n", n);
            }
            printf("-----------------------------------------------------\n");
        }
    }
}

int main() {
    //test_solution_18_a();
    test_solution_18_b();

    return 0;
}
