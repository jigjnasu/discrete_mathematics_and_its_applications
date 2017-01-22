/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 29
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

#include "common.h"
#include "merge_sort.h"
#include <cstdio>
#include <map>
#include <vector>

std::map<int, int> mode_count(const std::vector<int>& list) {
    int value = 0;
    int count = 0;

    int last_value = list[0];
    int last_count = 1;
    for (std::size_t i = 1; i < list.size(); ++i) {
        if (list[i] == last_value) {
            ++last_count;
        } else {
            if (last_count > count) {
                value = last_value;
                count = last_count;
            }

            last_value = list[i];
            last_count = 1;
        }
    }

    if (last_count > count) {
        count = last_count;
        value = last_value;
    }

    std::map<int, int> result;
    result.insert(std::pair<int, int>(value, count));
    return result;
}

void test_mode_count() {
    const int min = 1;
    const int max = 100;
    const int limit = 10000;
    discrete_mathematics::chapter_3::Common<int> common;
    discrete_mathematics::chapter_3::MergeSort<int> sort;

    std::vector<int> list;
    for (int i = 0; i < limit; ++i)
        list.push_back(common.random(min, max));
    sort.sort(list);
    common.print(list);

    const std::map<int, int> result = mode_count(list);

    for (std::map<int, int>::const_iterator it = result.begin();
         it != result.end(); ++it) {
        printf("-----------------------------------------------------------------------------------------\n");
        printf("Mode count of the list with value == [%d] and mode == [%d]\n", it->first, it->second);
        printf("-----------------------------------------------------------------------------------------\n");        
    }

}

int main() {
    test_mode_count();
    
    return 0;
}
