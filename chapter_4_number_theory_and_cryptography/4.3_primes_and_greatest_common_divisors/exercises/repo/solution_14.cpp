#include <cstdio>
#include <cmath>

bool is_prime(int n) {
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
        
    return true;
}

void test_solution_14() {
    printf("--------------------------------------------\n");
    int n = 12;
    for (int i = 1; i <= n; ++i)
        if (is_prime(i) && n % i != 0)
            printf("[%d] is a prime number\n", i);
    printf("--------------------------------------------\n");
}

void test_solution_15() {
    printf("--------------------------------------------\n");
    int n = 30;
    for (int i = 1; i <= n; ++i)
        if (is_prime(i) && n % i != 0)
            printf("[%d] is a prime number\n", i);
    printf("--------------------------------------------\n");
}

int main() {
    test_solution_14();
    test_solution_15();
    
    return 0;
}
