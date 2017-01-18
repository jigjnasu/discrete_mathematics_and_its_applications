/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 3
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

int sum(const std::vector<int>& list) {
    int sum = 0;
    int i = 0;
    int j = list.size() - 1;

    while (i < j) {
        sum += list[i++];
        sum += list[j--];
    }

    if (i == j)
        sum += list[i];

    return sum;
}

void test_sum() {
    for (int i = 0; i < 10; ++i) {
        const std::vector<int> list = build_list();
        print(list);
        printf("Sum of all the elements of the list == [%d]\n\n", sum(list));
    }
}

int main() {
    test_sum();
    
    return 0;
}
