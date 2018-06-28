/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.1 The Basics of Counting
  Solution 23
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  23/07/2017
 */

#include <cstdio>
#include <vector>

inline void print(const std::vector<int>& numbers) {
    printf("-----------------------------------------------------\n");
    for (std::size_t i = 0; i < numbers.size(); ++i)
        printf("%d ", numbers[i]);
    printf("\n-----------------------------------------------------\n");
}

std::vector<int> solution_a(int start, int end, int div) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (i % div == 0)
            n.push_back(i);
    return n;
}

std::vector<int> solution_b(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; i += 2)
        n.push_back(i);
    return n;
}

std::vector<int> solution_c(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (((i / 100) == (i % 10)) &&
            (i / 100) == ((i / 10) % 10))
            n.push_back(i);
    return n;
}

std::vector<int> solution_d(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (i % 4)
            n.push_back(i);
    return n;
}

std::vector<int> solution_e(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (i % 3 == 0 || i % 4 == 0)
            n.push_back(i);
    return n;
}

std::vector<int> solution_f(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (!(i % 3 == 0 || i % 4 == 0))
            n.push_back(i);
    return n;
}

std::vector<int> solution_g(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (i % 3 == 0 && i % 4)
            n.push_back(i);
    return n;
}

std::vector<int> solution_h(int start, int end) {
    std::vector<int> n;
    for (int i = start; i <= end; ++i)
        if (i % 3 == 0 && i % 4 == 0)
            n.push_back(i);
    return n;
}

void solution_23() {
    printf("------------------ Solution 23 --------------------\n");
    
    // Solution a)
    int start = 100;
    int end = 999;
    int div = 7;
    std::vector<int> a = solution_a(start, end, div);
    printf("------------------ Solution a) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by [%d]\n", a.size(), start, end, div);
    print(a);

    // Solution b)
    start = 100;
    end = 999;
    std::vector<int> b = solution_b(start, end);
    printf("------------------ Solution b) --------------------\n");
    printf("Odd elements [%lu] between [%d] - [%d]\n", b.size(), start, end);
    print(b);

    // Solution c)
    start = 100;
    end = 999;
    std::vector<int> c = solution_c(start, end);
    printf("------------------ Solution c) --------------------\n");
    printf("Same digits [%lu] between [%d] - [%d]\n", c.size(), start, end);
    print(c);

    // Solution d)
    start = 100;
    end = 999;
    std::vector<int> d = solution_d(start, end);
    printf("------------------ Solution d) --------------------\n");
    printf("[%lu] between [%d] - [%d] not divisible by 4\n", d.size(), start, end);
    print(d);

    // Solution e)
    start = 100;
    end = 999;
    std::vector<int> e = solution_e(start, end);
    printf("------------------ Solution e) --------------------\n");
    printf("[%lu] between [%d] - [%d] divisible by 3 or 4\n", e.size(), start, end);
    print(e);

    // Solution f)
    start = 100;
    end = 999;
    std::vector<int> f = solution_f(start, end);
    printf("------------------ Solution f) --------------------\n");
    printf("[%lu] between [%d] - [%d] NOT divisible by 3 or 4\n", f.size(), start, end);
    print(f);

    // Solution g)
    start = 100;
    end = 999;
    std::vector<int> g = solution_g(start, end);
    printf("------------------ Solution g) --------------------\n");
    printf("[%lu] between [%d] - [%d] divisible by 3 NOT by 4\n", g.size(), start, end);
    print(g);

    // Solution h)
    start = 100;
    end = 999;
    std::vector<int> h = solution_h(start, end);
    printf("------------------ Solution h) --------------------\n");
    printf("[%lu] between [%d] - [%d] divisible by 3 AND by 4\n", h.size(), start, end);
    print(h);
}

int main() {
    solution_23();

    return 0;
}
