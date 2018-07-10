#include "iterative.h"
#include <cstdlib>
#include <random>

int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

const std::vector<Point<double>> random_points(int n) {
    const int s = 1;
    const int e = 10;
    std::vector<Point<double>> list;
    for (int i = 0; i < n; ++i) {
        const int x = random(s, e);
        const int y = random(e + 1, e * 3);
        list.push_back(Point<double>(x, y));
    }

    return list;
}

void print(const std::vector<Point<double>>& list) {
    printf("---------------------------------------------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("[%16.8lf], [%16.8lf]\n", list[i].x(), list[i].y());
    printf("---------------------------------------------------------------------\n");
}

void test_iterative() {
    const int n = 10;
    const std::vector<Point<double>> list = random_points(n);
    print(list);
    Iterative<double> iterative;
    iterative.closest_pair(list);
}

int main() {
    test_iterative();

    return 0;
}
