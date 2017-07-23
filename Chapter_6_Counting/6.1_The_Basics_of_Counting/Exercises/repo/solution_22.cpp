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
    printf("[%lu] elements between [%d] - [%d] divisible by [%d]\n", a.size(), s, e, g);
    print(a);

    // Solution b)
    s = 1;
    e = 1000;
    g = 7;
    std::vector<int> b = solution_b(a);
    printf("[%lu] elements between [%d] - [%d] divisible by [%d] not by [11]\n", b.size(), s, e, g);
    print(b);

    // Solution c)
    s = 1;
    e = 1000;
    g = lcm(11, 7);
    std::vector<int> c = range(s, e, g);
    printf("[%lu] elements between [%d] - [%d] divisible by [%d]\n", c.size(), s, e, g);
    print(c);


    // Solution d)
    s = 1;
    e = 1000;
    std::vector<int> d = solution_d(s, e, 7, 11);
    printf("[%lu] elements between [%d] - [%d] divisible by [7 or 11]\n", d.size(), s, e);
    print(d);
}

int main() {
    solution_22();

    return 0;
}
