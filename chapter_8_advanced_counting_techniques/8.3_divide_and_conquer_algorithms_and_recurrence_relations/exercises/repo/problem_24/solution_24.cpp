/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 24
  Rakesh Kumar, cpp.rakesh@gmail.com
  17/07/2018
 */

#include <bits/stdc++.h>

int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

std::vector<std::pair<int, int>> get(int n) {
    std::vector<std::pair<int, int>> p;
    for (int i = 0; i < n; ++i)
        p.push_back(std::pair<int, int>(random(1, 20), random(1, 20)));

    return p;
}

void print(const std::vector<std::pair<int, int>>& p) {
    printf("-------------------------------------------------------\n");
    for (std::size_t i = 0;i < p.size(); ++i)
        printf("%2d.   (%2d, %2d)\n", i, p[i].first, p[i].second);
    printf("-------------------------------------------------------\n");
}

double euclidean_distance(const std::pair<int, int>& a,
                          const std::pair<int, int>& b) {
    return std::sqrt(std::abs((b.first  - a.first)  * (b.first  - a.first) +
                              (b.second - b.second) * (b.second - a.second)));
}

void iterative(const std::vector<std::pair<int, int>>& p) {
    int a      = 0;
    int b      = 1;
    double min = euclidean_distance(p[0], p[1]);
    for (int i = 1; i < p.size() - 1; ++i) {
        for (int j = i + 1; j < p.size(); ++j) {
            const double m = euclidean_distance(p[i], p[j]);
            if (m < min) {
                min = m;
                a   = i;
                b   = j;
            }
        }
    }

    printf("-------------------------------------------------------\n");
    printf("Minimum distance between (%2d and %2d) == [%lf]\n", a, b, min);
    printf("-------------------------------------------------------\n");
}

void test() {
    const int n = 10;
    const std::vector<std::pair<int, int>> p = get(n);
    print(p);
    iterative(p);
}

int main() {
    test();

    return 0;
}
