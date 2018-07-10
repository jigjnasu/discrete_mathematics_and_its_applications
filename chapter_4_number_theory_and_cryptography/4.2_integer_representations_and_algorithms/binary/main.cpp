#include "binary.h"
#include <cmath>
#include <cstdlib>
#include <random>

const int min = 1;
const int max = 1000;

int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

namespace dc = discrete_mathematics::chapter_4;


void test_add() {
    printf("------------------ Add test cases -------------------\n");
    for (int i = 0; i < 10; ++i) {
        printf("-----------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max);

        const dc::Binary b_a(a);
        const dc::Binary b_b(b);

        printf("a == [%d] || Binary == [", a);
        b_a.print();
        printf("] || Decimal == [%d]\n", b_a.decimal());

        printf("b == [%d] || Binary == [", b);
        b_b.print();
        printf("] || Decimal == [%d]\n", b_b.decimal());

        const int c = a + b;
        const dc::Binary b_c = b_a + b_b;
        printf("c == [%d] || Binary == [", c);
        b_c.print();
        printf("] || Decimal == [%d]\n", b_c.decimal());
        printf("-----------------------------------------------------\n");
    }

    printf("-----------------------------------------------------\n");
}

void test_subtract() {
    printf("------------------ Subtract test cases -------------------\n");
    for (int i = 0; i < 10; ++i) {
        printf("-----------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max);

        const dc::Binary b_a(a);
        const dc::Binary b_b(b);

        printf("a == [%d] || Binary == [", a);
        b_a.print();
        printf("] || Decimal == [%d]\n", b_a.decimal());

        printf("b == [%d] || Binary == [", b);
        b_b.print();
        printf("] || Decimal == [%d]\n", b_b.decimal());

        const int c = std::abs(a - b);
        const dc::Binary b_c = b_a - b_b;
        printf("c == [%d] || Binary == [", c);
        b_c.print();
        printf("] || Decimal == [%d]\n", b_c.decimal());
        printf("-----------------------------------------------------\n");
    }

    printf("-----------------------------------------------------\n");
}

void test_multiplay() {
    printf("--------------- Multiply test cases -------------------\n");
    for (int i = 0; i < 10; ++i) {
        printf("-----------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max);

        const dc::Binary b_a(a);
        const dc::Binary b_b(b);

        printf("a == [%d] || Binary == [", a);
        b_a.print();
        printf("] || Decimal == [%d]\n", b_a.decimal());

        printf("b == [%d] || Binary == [", b);
        b_b.print();
        printf("] || Decimal == [%d]\n", b_b.decimal());

        const int c = a * b;
        const dc::Binary b_c = b_a * b_b;
        printf("c == [%d] || Binary == [", c);
        b_c.print();
        printf("] || Decimal == [%d]\n", b_c.decimal());
        printf("-----------------------------------------------------\n");
    }

    printf("-----------------------------------------------------\n");
}

void test_compare() {
    printf("--------------- Compare test cases ------------------\n");
    for (int i = 0; i < 10; ++i) {
        printf("-----------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max);

        const dc::Binary b_a(a);
        const dc::Binary b_b(b);

        printf("a == [%d] || Binary == [", a);
        b_a.print();
        printf("] || Decimal == [%d]\n", b_a.decimal());

        printf("b == [%d] || Binary == [", b);
        b_b.print();
        printf("] || Decimal == [%d]\n", b_b.decimal());

        printf("a > b   == [%d]\n", b_a >  b_b);
        printf("a < b   == [%d]\n", b_a <  b_b);
        printf("a ==  b == [%d]\n", b_a == b_b);
        printf("a != b  == [%d]\n", b_a != b_b);

        printf("-----------------------------------------------------\n");
    }

    printf("-----------------------------------------------------\n");
}

int main() {
    test_add();
    test_subtract();
    test_multiplay();
    test_compare();

    return 0;
}
