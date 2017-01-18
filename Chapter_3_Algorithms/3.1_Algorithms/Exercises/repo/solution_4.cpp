/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 4
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include <cstdio>
#include <vector>
#include <cstdlib>

int random(int min, int max) {
    return min + rand() % (max - min + 1);
}

void print(const std::vector<int>& list) {
    printf("[List]: ");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}

std::vector<int> build_list() {
    std::vector<int> list;
    for (int i = 0; i < 50; ++i)
        list.push_back(random(10, 200));
    return list;
}

// We make sure that there are at least 2 integers there in the input set
int largest_difference(const std::vector<int>& list) {
    int max_diff = list[1] - list[0];

    for (std::size_t i = 2; i < list.size() - 1; ++i)
        if (list[i + 1] - list[i] > max_diff)
            max_diff = list[i + 1] - list[i];
    
    return max_diff;
}

void test_largest_difference() {
    for (int i = 0; i < 10; ++i) {
        const std::vector<int> list = build_list();
        print(list);
        printf("Largest Difference == [%d]\n\n", largest_difference(list));
    }
}

int main() {
    test_largest_difference();
    
    return 0;
}

