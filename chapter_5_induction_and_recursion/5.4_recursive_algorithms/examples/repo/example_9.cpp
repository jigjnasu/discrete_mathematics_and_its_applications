/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 9 (Merge Sort)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  16/07/2017
 */

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <random>

inline int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

void merge(std::vector<int>& v, int s, int m, int e) {
    std::vector<int> l;
    for (int i = s; i <= m; ++i)
        l.push_back(v[i]);

    std::vector<int> r;
    for (int i = m + 1; i <= e; ++i)
        r.push_back(v[i]);

    int i = s;
    int li = 0;
    int ri = 0;

    while (li < l.size() && ri < r.size()) {
        if (l[li] < r[ri])
            v[i++] = l[li++];
        else
            v[i++] = r[ri++];
    }

    while (li < l.size())
        v[i++] = l[li++];
    while (ri < r.size())
        v[i++] = r[ri++];
}

void merge_sort(std::vector<int>& v, int s, int e) {
    if (s < e) {
        const int m = (s + e) >> 1;
        merge_sort(v, s, m);
        merge_sort(v, m + 1, e);
        merge(v, s, m, e);
    }
}

inline void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    std::vector<int> v;
    for (int i = 0; i < 20; ++i)
        v.push_back(random(1, 100));

    print(v);
    merge_sort(v, 0, v.size() - 1);
    print(v);

    return 0;
}
