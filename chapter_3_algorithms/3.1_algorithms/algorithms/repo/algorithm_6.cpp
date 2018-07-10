/*
  Implementation of Algorithm 6(Greedy Algorithm) Coin change with least coins
  Chapter 3.1 (Algorithms)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Jan 18th, 2017
 */

#include <cstdio>
#include <map>
#include <vector>
#include <cstdlib>
#include <random>

int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

std::map<int, int> change(const std::vector<int> denominations, int value) {
    int i = 0;
    std::map<int, int> change;
    while (value) {
        while (value >= denominations[i]) {
            ++change[denominations[i]];
            value -= denominations[i];
        }
        ++i;
    }

    return change;
}

void test_change() {
    const std::vector<int> denominations = {50, 25, 15, 10 , 5, 1};

    for (int i = 0; i < 10; ++i) {
        const int value = random(10, 500);
        const std::map<int, int> coins = change(denominations, value);

        printf("[%d] Paise can be written as ---> folows --->\n", value);
        for (std::map<int, int>::const_iterator it = coins.begin(); it != coins.end(); ++it)
            printf("[%5d] X [%5d] == [%5d]\n", it->first, it->second, it->first * it->second);
    }
}

int main() {
    test_change();

    return 0;
}
