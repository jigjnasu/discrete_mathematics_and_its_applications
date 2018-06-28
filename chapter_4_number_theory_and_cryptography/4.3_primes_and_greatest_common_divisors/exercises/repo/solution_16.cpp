#include <cstdio>
#include <cmath>
#include <vector>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int m_gcd(int a, int b) {
    if (b == 0)
        return a;
    m_gcd(b, a % b);
}

int gcd(int a, int b) {
    return m_gcd(max(a, b), min(a, b));
}

bool is_prime_sets(const std::vector<int>& set) {
    for (std::size_t i = 0; i < set.size() - 1; ++i)
        for (std::size_t j = i + 1; j < set.size(); ++j)
            if (gcd(set[i], set[j]) > 1)
                return false;
    
    return true;
}

void print(const std::vector<int>& set) {
    for (std::size_t i = 0; i < set.size(); ++i)
        printf("%d ", set[i]);
}

void test_solution_16() {
    printf("----------------------------------------------------------\n");
    std::vector< std::vector<int> > input = { {21, 34, 55},
                                              {14, 17, 85},
                                              {25, 41, 49, 64},
                                              {17, 18, 19, 23} };
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (is_prime_sets(input[i])) {
            printf("Set [");
            print(input[i]);
            printf("] is pairwise relatively prime\n");
        } else {
            printf("Set [");
            print(input[i]);
            printf("] is NOT pairwise relatively prime\n");
        }
    }
    printf("----------------------------------------------------------\n");
}

void test_solution_17() {
    printf("----------------------------------------------------------\n");
    std::vector< std::vector<int> > input = { {11, 15, 19},
                                              {14, 15, 21},
                                              {12, 17, 31, 37},
                                              {7, 8, 9, 11} };
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (is_prime_sets(input[i])) {
            printf("Set [");
            print(input[i]);
            printf("] is pairwise relatively prime\n");
        } else {
            printf("Set [");
            print(input[i]);
            printf("] is NOT pairwise relatively prime\n");
        }
    }
    printf("----------------------------------------------------------\n");
}

int main() {
    test_solution_16();
    test_solution_17();

    return 0;
}
