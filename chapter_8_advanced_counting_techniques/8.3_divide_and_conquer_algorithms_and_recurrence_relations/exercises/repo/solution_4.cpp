/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 4
  Rakesh Kumar, cpp.rakesh@gmail.com
  09/06/2018
 */

#include <bits/stdc++.h>
#include <random>

int fast_multiply(int a, int b) {
    int a1 = a >> 16;
    int a0 = ((1 << 16) - 1) & a;

    const int b1 = b >> 16;
    const int b0 = ((1 << 16) - 1) & b;

    int x1 = a1 - a0;
    int x2 = b0 - b1;
    int x3 = a1 * b1;
    int x4 = x1 * x2;
    int x5 = a0 * b0;

    int y1 = x3 << 4;
    int y2 = x3 << 2;
    int y3 = x4 << 2;
    int y4 = x5 << 2;
    int y5 = x5;

    return y1 + y2 + y3 + y4 + y5;
}

int normal_multiplay(int a, int b) {
    return a * b;
}

int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

std::vector<int> get_random_numbers(int s, int e, int n) {
    std::vector<int> v;
    for (int i = 0; i < 2 * n; ++i)
        v.push_back(random(s, e));

    return v;
}

int unit_test() {
    printf("-----------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------\n");
    const std::vector<int> v = get_random_numbers(1, 100000, 30);

    std::vector<int> rfm;
    std::clock_t start = std::clock();
    for (std::size_t i = 0; i < v.size(); i += 2)
        rfm.push_back(fast_multiply(v[i], v[i + 1]));
    printf("Execution time for fast multiplication   == [%.08lf] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    std::vector<int> rnm;
    start = std::clock();
    for (std::size_t i = 0; i < v.size(); i += 2)
        rnm.push_back(fast_multiply(v[i], v[i + 1]));
    printf("Execution time for normal multiplication == [%.08lf] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    for (std::size_t i = 0; i < rnm.size(); ++i)
        printf("[%8d] * [%8d] == [%16d] || [%16d] || result == [%s]\n",
               v[2 * i], v[2 * i + 1], rfm[i], rnm[i], rfm[i] == rnm[i] ? "PASS" : "FAIL");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------\n");
}

int main() {
    unit_test();

    return 0;
}
