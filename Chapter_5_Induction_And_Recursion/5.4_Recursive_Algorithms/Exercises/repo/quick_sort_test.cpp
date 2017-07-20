#include "quick_sort.h"
#include "common.h"
#include <cstdio>

void print(const std::vector<int>& data) {
    printf("------------------------------------------------------\n");
    for (std::size_t i = 0; i < data.size(); ++i)
        printf("%d ", data[i]);
    printf("\n------------------------------------------------------\n");    
}

int main() {
    discrete_mathematics::Common<int> common;
    std::vector<int> list;
    for (int i = 0; i < 50; ++i)
        list.push_back(common.random(1, 1000));
    print(list);

    discrete_mathematics::QuickSort<int> sort;
    sort.Sort(list, 0, list.size() - 1);
    print(list);

    return 0;
}
