/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Example 5 (Recursive Linear Search)
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

int search(const std::vector<int>& v, int x, int n) {
    if (n == -1)
        return -1;
    else if (v[n] == x)
        return n;
    else
        search(v, x, n - 1);
}

inline void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    std::vector<int> v;
    for (int n = 0; n < 100; ++n)
        v.push_back(random(1, 100));

    print(v);

    const int x = 87;
    printf("[%2d] found at [%d] location\n", x, search(v, x, v.size() - 1));
    return 0;
}
