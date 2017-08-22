#include "algorithm_1.h"

void test_algorithm_1() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    discrete_mathematics::algorithms::Permutations<int> p;
    p.Generate(v);    
}

int main() {
    test_algorithm_1();
    
    return 0;
}
