#include "solution_23_a.h"
#include "solution_23_c.h"
#include "utility.h"
#include <cstdio>

void print(const std::vector<int>& list) {
    printf("-----------------------------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n-----------------------------------------------------\n");
}

void test_iterative(const std::vector<int>& list) {
    discrete_mathematics::chapter_8::Iterative it;
    printf("Maximum sub array sum == [%d]\n", it.Max(list));
}

void test_divide_and_conquer(const std::vector<int>& list) {
    discrete_mathematics::chapter_8::DivideAndConquer dac;
    printf("Maximum sub array sum == [%d]\n", dac.Max(list));
}

int main() {
    discrete_mathematics::chapter_8::Utility<int> util;
    const std::vector<int> list = util.Get(50, -1000, 1000);
    print(list);
    test_iterative(list);
    test_divide_and_conquer(list);

    return 0;
}
