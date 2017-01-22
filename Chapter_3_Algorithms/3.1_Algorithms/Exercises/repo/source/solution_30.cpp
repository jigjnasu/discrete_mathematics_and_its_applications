/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 30
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 22nd, 2017
 */

#include "common.h"
#include "merge_sort.h"
#include <cstdio>
#include <map>
#include <vector>

std::map<int, int> mode_count(const std::vector<int>& list) {
    std::map<int, int> result;
    int value = 0;
    int count = 0;

    int last_value = list[0];
    int last_count = 1;
    for (std::size_t i = 1; i < list.size(); ++i) {
        if (list[i] == last_value) {
            ++last_count;
        } else {
            value = last_value;
            count = last_count;

            result.insert(std::pair<int, int>(value, count));
            
            last_value = list[i];
            last_count = 1;
        }
    }

    if (last_count)
        result.insert(std::pair<int, int>(last_value, last_count));

    return result;
}

void test_mode_count() {
    const int min = 1;
    const int max = 10;
    const int limit = 100;
    discrete_mathematics::chapter_3::Common<int> common;
    discrete_mathematics::chapter_3::MergeSort<int> sort;

    std::vector<int> list = common.build_vector(limit, min, max);
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
