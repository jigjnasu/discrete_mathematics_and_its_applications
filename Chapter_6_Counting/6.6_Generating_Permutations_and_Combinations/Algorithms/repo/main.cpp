#include "algorithm_1.h"
#include "algorithm_2.h"
#include "algorithm_3.h"

inline void print_s(const std::string& n) {
    for (std::size_t i = 0; i < n.size(); ++i)
        printf("%c ", n[i]);
    printf("\n");
}

inline void print_v(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

void test_algorithm_1() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    discrete_mathematics::algorithms::Permutations<int> p;
    p.Generate(v);    
}

void test_algorithm_2() {
    std::string n = "00000000";
    discrete_mathematics::algorithms::BitString bs;
    for (int i = 0; i < 255; ++i) {
        bs.Next(n);
        print_s(n);
    }
}

void test_algorithm_3() {
    std::vector<int> n = {1, 2, 3, 4, 5};
    std::vector<int> r = {1, 2, 3};
    discrete_mathematics::algorithms::Combination<int> comb;
    for (int i = 0; i < 10; ++i) {
        print_v(r);
        comb.Next(n, r);
    }
}

int main() {
    //test_algorithm_1();
    //test_algorithm_2();
    test_algorithm_3();
    
    return 0;
}
