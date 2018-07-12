#include "merge_sort.h"
#include <bits/stdc++.h>

int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

std::vector<int> get(int n) {
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
        v.push_back(random(1, 100));

    return v;
}

void print(const std::vector<int>& v) {
    printf("-------------------------------------------------------\n");
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n-------------------------------------------------------\n");
}

void test() {
    std::vector<int> v = get(20);
    print(v);
    discrete_mathematics::chapter_3::MergeSort<int> ms;
    ms.sort(v);
    print(v);
}

int main() {
    test();

    return 0;
}
