/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 25
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 21st, 2017
 */

#include "common.h"
#include <cstdio>
#include <string>
#include <cstdlib>
#include <ctime>

int linear_count(const std::string& input) {
    int count = 0;
    for (std::size_t i = 0; i < input.size(); ++i)
        if (input[i] == '1')
            ++count;
    return count;
}

int double_count(const std::string& input) {
    int count = 0;
    int i = 0;
    int j = input.size() - 1;

    while (i < j) {
        if (input[i++] == '1')
            ++count;
        if (input[j--] == '1')
            ++count;
    }

    if (i == j)
        if (input[i] == '1')
            ++count;
    return count;
}

std::string build_bit_string() {
    discrete_mathematics::chapter_3::Common<int> common;
    std::string input;
    for (int i = 0; i < 100000; ++i)
        input.push_back(common.random(0, 1) + '0');
    return input;
}

void test_count() {
    const std::string input = build_bit_string();
    
    std::clock_t start = clock();
    printf("---------------------------------------------------------------------\n");
    printf("Linear count execution time == [%.8f] seconds | result == [%d]\n",
           clock() - start / static_cast<double>(CLOCKS_PER_SEC), linear_count(input));
    printf("---------------------------------------------------------------------\n");

    start = clock();
    printf("---------------------------------------------------------------------\n");
    printf("Double count execution time == [%.8f] seconds | result == [%d]\n",
           clock() - start / static_cast<double>(CLOCKS_PER_SEC), double_count(input));
    printf("---------------------------------------------------------------------\n");        
}

int main() {
    test_count();

    return 0;
}
