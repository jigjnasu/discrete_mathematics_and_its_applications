#include <cstdio>
#include <cmath>

bool is_prime(std::size_t n) {
    for (std::size_t i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    std::size_t n = 1;
    while (1) {
        const std::size_t v = (n * n) - (79 * n) + 1601;
        if (!is_prime(v)) {
            printf("For [%lu] equation {n^2 - 79n + 1601} {%lu} is not prime\n", n, v);
            break;
        }
        ++n;
    }
    
    return 0;
}
