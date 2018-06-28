/*
  Implementation of Algorithm 4(Bubble Sort)
  Chapter 3.1 (Algorithms)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Jan 18th, 2017
 */

#include <cstdio>
#include <cstdlib>
#include <vector>

int random(int min, int max) {
    return min + rand() % (max - min + 1);
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

void bubble_sort(std::vector<int>& list) {
    for (std::size_t i = 1; i < list.size(); ++i)
        for (std::size_t j = 1; j < list.size(); ++j)
            if (list[j - 1] > list[j])
                swap(list[j], list[j - 1]);
}

void test_bubble_sort() {
    for (int i = 0; i < 10; ++i) {
        printf("---------------------------------------------------- Test case [%2d] -----------------------------------------\n", i + 1);
        std::vector<int> list = build_list();
        print(list);
        bubble_sort(list);
        print(list);
        printf("--------------------------------------------------------------------------------------------------------------\n");        
    }
}

int main() {
    test_bubble_sort();
    return 0;
}
