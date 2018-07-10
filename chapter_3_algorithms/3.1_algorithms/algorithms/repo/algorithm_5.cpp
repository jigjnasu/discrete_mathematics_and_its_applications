/*
  Implementation of Algorithm 5(Insertion Sort)
  Chapter 3.1 (Algorithms)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Jan 18th, 2017
 */

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <random>

int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

void print(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}

std::vector<int> build_list() {
    const int min = 0;
    const int max = 100;
    std::vector<int> list;
    for (int i = 0; i < 50; ++i)
        list.push_back(random(min, max));

    return list;
}

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void insertion_sort(std::vector<int>& list) {
    for (int i = 1; i < list.size(); ++i) {
        int j = i;
        while (j > 0 && list[j - 1] > list[j]) {
            swap(list[j], list[j - 1]);
            --j;
        }
    }
}

void test_insertion_sort() {
    for (int i = 0; i < 10; ++i) {
        printf("---------------------------------------------------- Test case [%2d] -----------------------------------------\n", i + 1);
        std::vector<int> list = build_list();
        print(list);
        insertion_sort(list);
        print(list);
        printf("--------------------------------------------------------------------------------------------------------------\n");
    }
}

int main() {
    test_insertion_sort();
    return 0;
}
