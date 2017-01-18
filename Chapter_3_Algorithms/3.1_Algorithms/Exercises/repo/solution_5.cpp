/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 5
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "merge_sort.h"
#include "common.h"
#include <set>
#include <cstdio>

std::vector<int> multiple_occurences_normal(const std::vector<int>& list) {
    std::vector<int> duplicates;
    std::size_t i = 0;
    while (i < list.size()) {
        if (list[i] == list[i + 1])
            duplicates.push_back(list[i]);

        int j = i;
        while (j < list.size() && list[j] == list[i]) ++j;
        i = j;
    }
    
    return duplicates;
}

std::set<int> multiple_occurences_set(const std::vector<int>& list) {
    std::set<int> duplicates;
    for (std::size_t i = 0; i < list.size() - 1; ++i)
        if (list[i] == list[i + 1])
            duplicates.insert(list[i]);
    return duplicates;
}

void test_multiple_occurences() {
    discrete_mathematics::chapter_3::MergeSort<int> sort;
    discrete_mathematics::chapter_3::Common<int> common;

    for (int i = 0; i < 10; ++i) {
        printf("------------------------------------------------------------------\n");
        std::vector<int> list = common.build_vector(50, 0, 100);
        sort.sort(list);
        common.print_vector(list);
        printf("Elements in the list more than once are\n");
        common.print_vector(multiple_occurences_normal(list));
        const std::set<int> duplicates = multiple_occurences_set(list);
        for (std::set<int>::const_iterator it = duplicates.begin();
             it != duplicates.end(); ++it)
            printf("%d ", *it);
        printf("\n------------------------------------------------------------------\n");
    }
}

int main() {
    test_multiple_occurences();
    
    return 0;
}
