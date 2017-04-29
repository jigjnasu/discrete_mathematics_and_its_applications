#include "Hash.h"
#include <cstdio>

int main() {
    discrete_mathematics::chapter_4::Hash h(97);

    printf("---------------------------------------------------------\n");
    // Problem a)
    const int a = 34567981;
    printf("[%10d] memory location == [%2d]\n", a, h.location(a));

    // Problem b)
    const int b = 183211232;
    printf("[%10d] memory location == [%2d]\n", b, h.location(b));

    // Problem c)
    const int c = 220195744;
    printf("[%10d] memory location == [%2d]\n", c, h.location(c));

    // Problem d)
    const int d = 987255335;
    printf("[%10d] memory location == [%2d]\n", d, h.location(d));

    printf("---------------------------------------------------------\n");
    
    return 0;
}
