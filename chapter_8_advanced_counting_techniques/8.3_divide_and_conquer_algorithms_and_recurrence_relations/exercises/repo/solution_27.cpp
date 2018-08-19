/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 27
  Rakesh Kumar, cpp.rakesh@gmail.com
  19/08/2018
*/

#include <bits/stdc++.h>

typedef std::pair<int, int> point;
typedef std::vector<point> points;

const int inf = (1 << 30);

int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

points get_points(int n) {
    points p;
    for (int i = 0; i < n; ++i)
        p.push_back(point(random(1, 1e+7), random(1, 1e+7)));
    return p;
}

void print(const points& p) {
    printf("----------------------------------------------------------------------\n");
    for (std::size_t i = 0; i < p.size(); ++i)
        printf("[%8d] (%8d, %8d)\n", i, p[i].first, p[i].second);
    printf("----------------------------------------------------------------------\n");
}

int distance(const point& a, const point& b) {
    return std::max(std::abs(a.first  - b.first),
                    std::abs(a.second - b.second));
}

int iterative_closest_distance(const points& p) {
    int min = distance(p[0], p[1]);
    for (std::size_t i = 0; i < p.size() - 1; ++i)
        for (std::size_t j = i + 1; j < p.size(); ++j)
            min = std::min(min, distance(p[i], p[j]));
    return min;
}

int strip_distance(points& p) {
    std::sort(p.begin(), p.end(), [](point& a, point& b) {
            return a.second < b.second;
        });

    int min = distance(p[0], p[1]);
    for (std::size_t i = 0; i < p.size() - 1; ++i)
        for (std::size_t j = i + 1; j < p.size() && (p[j].second - p[i].second) < min; ++j)
            min = std::min(min, distance(p[i], p[j]));
    return min;
}

int divide_and_conquer_closest_distance(points& p, int s, int e) {
    if (s < e) {
        if (s + 1 == e)
            return distance(p[0], p[1]);

        const int m = (s + e) >> 1;
        const int l_m = divide_and_conquer_closest_distance(p, s, m);
        const int r_m = divide_and_conquer_closest_distance(p, m + 1, e);
        int min = std::min(l_m, r_m);

        points strip;
        for (int i = s; i < m; ++i)
            if (std::abs(p[i].first - p[m].first) < min)
                strip.push_back(p[i]);

        strip.push_back(p[m]);

        for (int i = m + 1; i <= e; ++i)
            if (std::abs(p[i].first - p[m].first) < min)
                strip.push_back(p[i]);

        if (strip.size() < 2)
            return min;
        else
            return std::min(min, strip_distance(strip));
    }

    return inf;
}

void test_iterative(const points& p) {
    printf("[Iterative] Closest distance == [%d]\n", iterative_closest_distance(p));
}

void test_divide_and_conquer(points& p) {
    std::sort(p.begin(), p.end(), [](point& a, point& b) {
            return a.first < b.first;
        });
    printf("[Iterative] Closest distance == [%d]\n", divide_and_conquer_closest_distance(p, 0, p.size() - 1));
}

int main() {
    const int n = 1e+3;
    points p1 = get_points(n);
    points p2 = p1;
    print(p1);

    test_iterative(p1);
    test_divide_and_conquer(p2);

    return 0;
}
