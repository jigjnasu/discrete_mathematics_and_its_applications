/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 13
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  17/07/2017
 */

#include "common.h"
#include <cstdio>
#include <map>
#include <vector>

int mode(const std::vector<int>& list, std::map<int, int>& hash, int n) {
    if (n == 0) {
        ++hash[list[0]];
        int max = 0;
        int x = 0;
        for (std::map<int, int>::const_iterator it = hash.begin();
             it != hash.end(); ++it) {
            if (it->second > max) {
                max = it->second;
                x = it->first;
            }
        }

        return x;
    } else {
        ++hash[list[n]];
        mode(list, hash, n - 1);
    }
}

inline void print(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}

void test() {
    discrete_mathematics::Common<int> common;
    std::vector<int> list;
    for (int i = 0; i < 100; ++i)
        list.push_back(common.random(1, 100));
    print(list);
    
    std::map<int, int> hash;
    printf("Mode == [%d]\n", mode(list, hash, list.size() - 1));
}

int main() {
    test();

    return 0;
}
