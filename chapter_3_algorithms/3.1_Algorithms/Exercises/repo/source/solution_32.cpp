/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 32
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

#include "common.h"
#include <cstdio>
#include <vector>

std::vector<int> greater_than_sum(const std::vector<int>& list) {
    std::vector<int> result;
    std::vector<int> sum;
    sum.push_back(list[0]);

    for (std::size_t i = 1; i < list.size(); ++i) {
        if (list[i] > sum[i - 1])
            result.push_back(list[i]);
        sum.push_back(list[i] + sum[i - 1]);
    }

    return result;
}

void test_greater_than_sum() {
    const int min = 1;
    const int max = 1000;
    const int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;

    std::vector<int> list = common.build_vector(limit, min, max);
    common.print(list);

    printf("-----------------------------------------------------------------\n");
    printf("Elements greater than the sum of all previuos elements\n");
    const std::vector<int> result = greater_than_sum(list);
    for (std::size_t i = 0; i < result.size(); ++i)
        printf("%d ", result[i]);
    printf("\n-----------------------------------------------------------------\n");    
}

int main() {
    test_greater_than_sum();
    
    return 0;
}
