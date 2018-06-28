/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 7
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>
#include <vector>

int last_even_number(const std::vector<int>& list) {
    int pos = 0;
    int i = list.size() - 1;
    while (i >= 0) {
        if (list[i] % 2 == 0) {
            pos = i + 1;
            break;
        }
        --i;
    }
    
    return pos;
}

void test_last_even_number() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const std::vector<int> list = common.build_vector(50, -100, 100);
        common.print_vector(list);
        printf("Position of the last even number == [%d]\n\n", last_even_number(list));
    }
}

int main() {
    test_last_even_number();

    return 0;
}
