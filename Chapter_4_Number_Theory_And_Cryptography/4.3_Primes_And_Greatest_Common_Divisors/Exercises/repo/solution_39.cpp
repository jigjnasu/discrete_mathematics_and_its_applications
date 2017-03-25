#include <cstdio>
#include <map>

int min(int x, int y) {
    return x < y ? x : y;
}

int max(int x, int y) {
    return x > y ? x : y;
}

int gcd(int x, int y) {
    printf("------------------------------------------------\n");
    printf("GCD as a linear comibnation of [%d] and [%d]\n", x, y);
    while (y != 0) {
        printf("[%6d] == [%6d] X [%6d] + [%6d]\n",
               x, y, x / y, x % y);
        const int t = x;
        x = y;
        y = t % y;
    }
    printf("------------------------------------------------\n");
    return x;
}

void test_solution_39() {
    const std::map<int, int> input = {{10, 11}, {21, 44}, {36, 48},
                                      {34, 55}, {117, 213}, {0, 223},
                                      {123, 2347}, {3454, 4666}, {9999, 11111}};
    for (std::map<int, int>::const_iterator it = input.begin();
         it != input.end(); ++it)
        gcd(max(it->first, it->second), min(it->first, it->second));
}

void test_solution_40() {
    const std::map<int, int> input = {{9, 11}, {33, 44}, {35, 78},
                                      {21, 55}, {101, 203}, {124, 323},
                                      {2002, 2339}, {3457, 4669}, {10001, 13422}};
    for (std::map<int, int>::const_iterator it = input.begin();
         it != input.end(); ++it)
        gcd(max(it->first, it->second), min(it->first, it->second));
}

void test_solution_41() {
    printf("gcd(26, 91) == [%d]\n", gcd(26, 91));
}

void test_solution_42() {
    printf("gcd(252, 356) == [%d]\n", gcd(252, 356));
}

int main() {
    //test_solution_39();
    //test_solution_40();
    //test_solution_41();
    test_solution_42();

    return 0;
}
