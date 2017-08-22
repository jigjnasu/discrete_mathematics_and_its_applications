#include "algorithm_1.h"
#include "algorithm_2.h"

inline void print(const std::string& n) {
    for (std::size_t i = 0; i < n.size(); ++i)
        printf("%c ", n[i]);
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
        print(n);
    }
}

int main() {
    //test_algorithm_1();
    test_algorithm_2();
    
    return 0;
}
