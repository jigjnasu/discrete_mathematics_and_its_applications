/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 6 (Recursive Binary Search)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>
#include <vector>
#include <cstdlib>
#include <random>

inline int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

inline int swap(int& a, int& b) {
    const int t = a;
    a = b;
    b = t;
}

inline void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int search(const std::vector<int>& v, int x, int s, int e) {
    while (s < e) {
        const int m = (s + e) >> 1;
        if (x == v[m])
            return m;
        else if (x < v[m])
            e = m - 1;
        else
            s = m + 1;
    }

    return -1;
}

int partition(std::vector<int>& v, int s, int e) {
    swap(v[random(s, e)], v[e]);
    int i = s;
    for (int j = s; j < e; ++j) {
        if (v[j] <= v[e]) {
            swap(v[i], v[j]);
            ++i;
        }
    }

    swap(v[i], v[e]);
    return i;
}

void quick_sort(std::vector<int>& v, int s, int e) {
    if (s < e) {
        const int m = partition(v, s, e);
        quick_sort(v, s, m - 1);
        quick_sort(v, m + 1, e);
    }
}

int main() {
    std::vector<int> v;
    for (int i = 0; i < 100; ++i)
        v.push_back(random(1, 200));

    print(v);
    quick_sort(v, 0, v.size() - 1);
    print(v);

    printf("[%2d] found at [%2d] location\n", 44, search(v, 44, 0, v.size() - 1));
    return 0;
}
