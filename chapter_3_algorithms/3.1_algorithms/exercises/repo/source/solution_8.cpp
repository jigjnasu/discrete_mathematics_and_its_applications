/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 8
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include "common.h"
#include <cstdio>
#include <set>

int largest_even_number(const std::set<int>& list) {
    int largest = 0;

    for (std::set<int>::const_iterator it = list.begin();
         it != list.end(); ++it)
        if (*it % 2 == 0 && *it > largest)
            largest = *it;
    
    return largest;
}

void test_largest_even_number() {
    discrete_mathematics::chapter_3::Common<int> common;
    for (int i = 0; i < 10; ++i) {
        const std::set<int> list = common.build_set(50, -100, 100);
        common.print(list);
        printf("Maximum largest even number == [%d]\n\n", largest_even_number(list));
    }
}
int main() {
    test_largest_even_number();
    
    return 0;
}
