/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.2 The Pigeonhole Principle
  Solution 25
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  03/08/2017
 */

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <random>

int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

inline void print(const std::vector<int>& v) {
    printf("--------------------------------------------------------\n");
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n--------------------------------------------------------\n");
}

int max_increasing_count(const std::vector<int>& v) {
    int max = 0;
    for (std::size_t i = 0; i < v.size() - 1; ++i) {
        int m = 1;
        int l = v[i];
        for (std::size_t j = i + 1; j < v.size(); ++j)
            if (v[j] > l) {
                l = v[j];
                ++m;
            }
        if (m > max)
            max = m;
    }
    return max;
}

int max_decreaing_count(const std::vector<int>& v) {
    int max = 0;
    for (std::size_t i = 0; i < v.size() - 1; ++i) {
        int m = 1;
        int l = v[i];
        for (std::size_t j = i + 1; j < v.size(); ++j)
            if (v[j] < l) {
                l = v[j];
                ++m;
            }
        if (m > max)
            max = m;
    }
    return max;
}

int main() {
    std::vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(random(1, 20));

    print(v);

    printf("Max increasing element subsequence == [%d]\n", max_increasing_count(v));
    printf("Max increasing element subsequence == [%d]\n", max_decreaing_count(v));

    return 0;
}
