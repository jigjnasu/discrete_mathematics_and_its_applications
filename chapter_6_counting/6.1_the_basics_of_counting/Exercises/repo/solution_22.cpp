/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.1 The Basics of Counting
  Solution 22
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  23/07/2017
 */

#include <cstdio>
#include <vector>
#include <string>

inline void print(const std::vector<int>& numbers) {
    printf("-----------------------------------------------------\n");
    for (std::size_t i = 0; i < numbers.size(); ++i)
        printf("%d ", numbers[i]);
    printf("\n-----------------------------------------------------\n");
}

int start(int s, int e, int g) {
    return (s % g) ? ((s / e) + 1) * g : (s / e) * g;
}

std::vector<int> range(int s, int e, int g) {
    std::vector<int> numbers;
    for (int i = start(s, e, g); i < e; i += g)
        numbers.push_back(i);

    return numbers;
}

std::vector<int> solution_b(const std::vector<int>& numbers) {
    std::vector<int> n;

    for (std::size_t i = 0; i < numbers.size(); ++i)
        if (numbers[i] % 11)
            n.push_back(numbers[i]);
    
    return n;
}

std::vector<int> solution_d(int s, int e, int a, int b) {
    std::vector<int> n;
    for (int i = s; i < e; ++i)
        if (i % a == 0 || i % b == 0)
            n.push_back(i);
    
    return n;
}

std::vector<int> solution_e(int s, int e, int a, int b) {
    std::vector<int> n;
    for (int i = s; i < e; ++i)
        if ((i % a == 0 || i % b == 0) && (i % (a * b)))
            n.push_back(i);
    
    return n;
}

std::vector<int> solution_f(int s, int e, int a, int b) {
    std::vector<int> n;
    for (int i = s; i < e; ++i)
        if (!(i % a == 0 || i % b == 0))
            n.push_back(i);
    
    return n;
}

bool is_distinct(int n) {
    if (n < 10)
        return true;
    else if (n >= 10 && n <= 99)
        return n % 10 != n / 10;
    else
        return (((n / 100) != ((n / 10) % 10)) && ((n / 100) != (n % 10)) && (((n / 10) % 10) != (n % 10)));
}

std::vector<int> solution_g(int s, int e) {
    std::vector<int> n;
    for (int i = s; i < e; ++i)
        if (is_distinct(i))
            n.push_back(i);
    return n;
}

std::vector<int> solution_h(int s, int e) {
    const std::vector<int> n = solution_g(s, e);
    std::vector<int> r;
    for (std::size_t i = 0; i < n.size(); ++i)
        if (n[i] % 2 == 0)
            r.push_back(n[i]);
    return r;
}

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void solution_22() {
    printf("------------------ Solution 22 --------------------\n");
    
    // Solution a)
    int s = 1;
    int e = 1000;
    int g = 7;
    std::vector<int> a = range(s, e, g);
    printf("------------------ Solution a) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by [%d]\n", a.size(), s, e, g);
    print(a);

    // Solution b)
    s = 1;
    e = 1000;
    g = 7;
    std::vector<int> b = solution_b(a);
    printf("------------------ Solution b) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by [%d] not by [11]\n", b.size(), s, e, g);
    print(b);

    // Solution c)
    s = 1;
    e = 1000;
    g = lcm(11, 7);
    std::vector<int> c = range(s, e, g);
    printf("------------------ Solution c) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by [%d]\n", c.size(), s, e, g);
    print(c);


    // Solution d)
    s = 1;
    e = 1000;
    std::vector<int> d = solution_d(s, e, 7, 11);
    printf("------------------ Solution d) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] divisible by [7 or 11]\n", d.size(), s, e);
    print(d);

    // Solution e)
    std::vector<int> result = solution_e(1, 1000, 7, 11);
    printf("------------------ Solution e) --------------------\n");
    printf("[%lu] elements between [1] - [1000] divisible by [7 or 11 not by 77]\n", result.size());
    print(result);

    // Solution f)
    s = 1;
    e = 1000;
    std::vector<int> f = solution_f(s, e, 7, 11);
    printf("------------------ Solution f) --------------------\n");
    printf("[%lu] elements between [%d] - [%d] NOT divisible by [7 or 11]\n", f.size(), s, e);
    print(f);

    // Solution g)
    s = 1;
    e = 1000;
    std::vector<int> r = solution_g(s, e);
    printf("------------------ Solution g) --------------------\n");
    printf("Districnt elements [%lu] between [%d] - [%d]\n", r.size(), s, e);
    print(r);
    
    // Solution h)
    s = 1;
    e = 1000;
    std::vector<int> h = solution_h(s, e);
    printf("------------------ Solution h) --------------------\n");
    printf("Districnt elements [%lu] between [%d] - [%d]\n", h.size(), s, e);
    print(h);    
}

int main() {
    solution_22();

    return 0;
}
