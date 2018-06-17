#include "solution_23_a.h"
#include "solution_23_c.h"
#include "utility.h"
#include <cstdio>

void print(const std::vector<int>& list) {
    printf("------------------------------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n------------------------------------------------------\n");
}

void test_iterative(const std::vector<int>& list) {
    discrete_mathematics::chapter_8::Iterative it;
    printf("Maximum sub array sum == [%d]\n", it.Max(list));
}

void test_divide_and_conquer(const std::vector<int>& list) {
    discrete_mathematics::chapter_8::DivideAndConquer dac;
    printf("Maximum sub array sum == [%d]\n", dac.Max(list));
}

void book_test_cases() {
    const std::vector<int> a_list = {-2, 4, -1, 3, 5, -6, 1, 2};
    const std::vector<int> b_list = {-3, 7, -1, -5, 3, -2};
    const std::vector<int> c_list = {-1, 6, 3, -4, -5, 8, -1, 7};

    printf("Test case {a} from the book --------------------------\n");
    print(a_list);
    test_iterative(a_list);
    test_divide_and_conquer(a_list);

    printf("Test case {b} from the book --------------------------\n");
    print(b_list);
    test_iterative(b_list);
    test_divide_and_conquer(b_list);

    printf("Test case {c} from the book --------------------------\n");
    print(c_list);
    test_iterative(c_list);
    test_divide_and_conquer(c_list);
}

void random_test_cases() {
    discrete_mathematics::chapter_8::Utility<int> util;
    const std::vector<int> list = util.Get(50, -1000, 1000);
    print(list);
    test_iterative(list);
    test_divide_and_conquer(list);
}

int main() {
    book_test_cases();
    //random_test_cases();

    return 0;
}
