/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 33
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

#include "common.h"
#include <cstdio>
#include <map>
#include <vector>

std::map<int, int> find_first_least_number(const std::vector<int>& list) {
    std::map<int, int> result;
    for (std::size_t i = 1; i < list.size(); ++i) {
        if (list[i] < list[i - 1]) {
            result.insert(std::pair<int, int>(list[i], i + 1));
            break;
        }
    }

    return result;
}

void test_first_first_least_number() {
    int min = 1;
    int max = 100;
    int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;

    std::vector<int> list = common.build_vector(limit, min, max);
    const std::map<int, int> result = find_first_least_number(list);

    common.print(list);
    printf("------------------------------------------------------------------\n");
    printf("First term which is less than the previous term\n");
    for (std::map<int, int>::const_iterator it = result.begin();
         it != result.end(); ++it)
        printf("[%d] at [%d]\n", it->first, it->second);
    printf("------------------------------------------------------------------\n");    
}


int main() {
    test_first_first_least_number();

    return 0;
}
