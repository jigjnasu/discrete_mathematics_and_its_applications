#include <cstdio>
#include <vector>

// Ecluid gcd algo
int gcd(int x, int y) {
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}

void test_solution_38() {
    const std::vector<int> input = {35, 34, 33, 31, 29, 23};

    // gcd(2^a - 1, 2^b - 1) = 2^(gcd(a, b)) - 1

    printf("-----------------------------------------------\n");
    for (std::size_t i = 0; i < input.size() - 1; ++i)
        for (std::size_t j = i + 1; j < input.size(); ++j)
            if (gcd(input[i], input[j]) == 1)
                printf("2 ^ %d - 1 and 2 ^ %d - 1 are co primes\n",
                       input[i], input[j]);
    printf("-----------------------------------------------\n");
}

int main() {
    test_solution_38();

    return 0;
}
