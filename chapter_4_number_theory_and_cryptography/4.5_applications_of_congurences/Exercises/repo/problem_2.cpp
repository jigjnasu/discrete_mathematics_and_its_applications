#include "Hash.h"
#include <cstdio>

int main() {
    discrete_mathematics::chapter_4::Hash h(101);

    printf("---------------------------------------------------------\n");
    // Problem a)
    const int a = 104578690;
    printf("[%10d] memory location == [%2d]\n", a, h.location(a));

    // Problem b)
    const int b = 432222187;
    printf("[%10d] memory location == [%2d]\n", b, h.location(b));

    // Problem c)
    const int c = 372201919;
    printf("[%10d] memory location == [%2d]\n", c, h.location(c));

    // Problem d)
    const int d = 501338753;
    printf("[%10d] memory location == [%2d]\n", d, h.location(d));

    printf("---------------------------------------------------------\n");
    
    return 0;
}
