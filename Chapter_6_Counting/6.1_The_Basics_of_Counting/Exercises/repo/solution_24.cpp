/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.1 The Basics of Counting
  Solution 24
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  25/07/2017
 */

#include <cstdio>
#include <vector>

inline void print(const std::vector<int>& numbers) {
    printf("-----------------------------------------------------\n");
    for (std::size_t i = 0; i < numbers.size(); ++i)
        printf("%d ", numbers[i]);
    printf("\n-----------------------------------------------------\n");
}

bool is_distinct(int n) {
    const int a = n / 1000;
    const int b = (n / 100) % 10;
    const int c = (n % 100) / 10;
    const int d = n % 10;
    if (a == b || a == c || a == d ||
        b == c || b == d || c == d)
        return false;
    return true;
}

std::vector<int> solution_a(int start, int end, int div) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (i % 9 == 0)
            result.push_back(i);

    return result;
}

std::vector<int> solution_b(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; i += 2)
            result.push_back(i);

    return result;
}

std::vector<int> solution_c(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (is_distinct(i))
            result.push_back(i);

    return result;
}

std::vector<int> solution_d(int start, int end, int div) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (i % div)
            result.push_back(i);
    return result;
}

std::vector<int> solution_e(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (i % 5 == 0 || i % 7 == 0)
            result.push_back(i);
    return result;
}

std::vector<int> solution_f(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (i % 5 || i % 7)
            result.push_back(i);
    return result;
}

std::vector<int> solution_g(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (i % 5 == 0 && i % 7)
            result.push_back(i);
    return result;
}

std::vector<int> solution_h(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i)
        if (i % 5 == 0 && i % 7 == 0)
            result.push_back(i);
    return result;
}

void solution_24() {
    printf("------------------ Solution 24 --------------------\n");
    
    // Solution a)
    int start = 1000;
    int end = 9999;
    int div = 9;
    std::vector<int> a = solution_a(start, end, div);
    printf("------------------ Solution a) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by [%d]\n", a.size(), start, end, div);
    print(a);

    // Solution b)
    start = 1000;
    end = 9999;
    std::vector<int> b = solution_b(start, end);
    printf("------------------ Solution b) --------------------\n");
    printf("[%lu] Even elements between [%d] - [%d]\n", b.size(), start, end);
    print(b);

    // Solution c)
    start = 1000;
    end = 9999;
    std::vector<int> c = solution_c(start, end);
    printf("------------------ Solution c) --------------------\n");
    printf("[%lu] Distinct elements between [%d] - [%d]\n", c.size(), start, end);
    print(c);

    // Solution d)
    start = 1000;
    end = 9999;
    div = 3;
    std::vector<int> d = solution_d(start, end, div);
    printf("------------------ Solution d) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] NOT divisible by [%d]\n", d.size(), start, end, div);
    print(d);

    // Solution e)
    start = 1000;
    end = 9999;
    std::vector<int> e = solution_e(start, end);
    printf("------------------ Solution e) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by 5 OR 7\n", e.size(), start, end);
    print(e);

    // Solution f)
    start = 1000;
    end = 9999;
    std::vector<int> f = solution_f(start, end);
    printf("------------------ Solution f) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] NOT divisible by 5 OR 7\n", f.size(), start, end);
    print(f);

    // Solution g)
    start = 1000;
    end = 9999;
    std::vector<int> g = solution_g(start, end);
    printf("------------------ Solution g) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by 5 NOT by 7\n", g.size(), start, end);
    print(g);

    // Solution h)
    start = 1000;
    end = 9999;
    std::vector<int> h = solution_h(start, end);
    printf("------------------ Solution h) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by 5 AND by 7\n", h.size(), start, end);
    print(h);    
}

int main() {
    solution_24();

    return 0;
}
