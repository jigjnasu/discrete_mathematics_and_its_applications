#include <cstdio>
#include <cmath>
#include <vector>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1){
        return x;
    } else {
        const int t = power(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}

bool is_prime(int n) {
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
    
    return true;
}

void test_solution_20() {
    const std::vector<int> input = {7, 9, 11, 13};
    const int x = 2;

    printf("-----------------------------------------------------\n");
    for (std::size_t i = 0; i < input.size(); ++i) {
        const int value = power(x, input[i]) - 1;
        if (is_prime(value))
            printf("[%d] is a Mersenne's prime number\n", value);
        else
            printf("[%d] is NOT a Mersenne's prime number\n", value);
    }
    printf("-----------------------------------------------------\n");
}

int main() {
    test_solution_20();
    
    return 0;
}
