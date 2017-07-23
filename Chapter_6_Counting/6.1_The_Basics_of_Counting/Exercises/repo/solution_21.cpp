/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.1 The Basics of Counting
  Solution 21
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  23/07/2017
 */

#include <cstdio>

inline void print(int start, int end, int gap) {
    int s = (start % gap) ? ((start / gap) + 1) : (start / gap);
    s *= gap;

    printf("-----------------------------------------------------\n");
    while (s < end) {
        printf("%d ", s);
        s += gap;
    }
    printf("\n-----------------------------------------------------\n");
}

inline int range(int start, int end, int gap) {
    return (end / gap) - (start / gap);
}

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void solution_21() {
    printf("------------------ Solution 21 --------------------\n");
    // Test case for problem a)
    int s = 50;
    int e = 100;
    int g = 7;
    printf("[%d] elements between [%d] - [%d] divisible by [%d]\n", range(s, e, g), s, e, g);
    print(s, e, g);

    // Test case for problem b)
    s = 50;
    e = 100;
    g = 11;
    printf("[%d] elements between [%d] - [%d] divisible by [%d]\n", range(s, e, g), s, e, g);
    print(s, e, g);

    // Test case for problem c)
    s = 50;
    e = 100;
    g = lcm(11, 7);
    printf("[%d] elements between [%d] - [%d] divisible by [%d]\n", range(s, e, g), s, e, g);
    print(s, e, g);
}

int main() {
    solution_21();

    return 0;
}
