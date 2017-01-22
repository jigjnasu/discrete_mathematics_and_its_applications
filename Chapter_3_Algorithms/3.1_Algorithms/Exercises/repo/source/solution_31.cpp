/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 31
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */


#include "common.h"
#include <cstdio>
#include <vector>
#include <map>

std::map<int, int> first_duplicate(const std::vector<int>& list) {
    std::map<int, int> result;
    for (std::size_t i = 1; i < list.size(); ++i) {
        int j = 0;
        while (j < i) {
            if (list[j] == list[i]) {
                result.insert(std::pair<int, int>(list[i], j + 1));
                return result;
            }
            ++j;
        }
    }

    return result;
}

void test_first_duplicate() {
    const int min = 1;
    const int max = 100;
    const int limit = 10000;
    std::vector<int> list;
    discrete_mathematics::chapter_3::Common<int> common;
    
    for (int i = 0; i < limit; ++i)
        list.push_back(common.random(min, max));

    common.print(list);

    const std::map<int, int> result = first_duplicate(list);

    for (std::map<int, int>::const_iterator it = result.begin();
         it != result.end(); ++it) {
        printf("-----------------------------------------------------------\n");
        printf("First duplicate number [%d] found at [%d] location\n", it->first, it->second);
        printf("-----------------------------------------------------------\n");        
    }
}

int main() {
    test_first_duplicate();

    return 0;
}
