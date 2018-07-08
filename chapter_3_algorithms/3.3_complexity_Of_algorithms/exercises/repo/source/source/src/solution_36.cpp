#include "solution_36.h"
#include <vector>

namespace dc = discrete_mathematics::chapter_3;

const std::vector<int> denominations = {25, 10, 5, 1};

dc::Solution_36::Solution_36() {}

dc::Solution_36::~Solution_36() {}

std::map<int, int> dc::Solution_36::change(int money) const {
    std::map<int, int> change;
    int i = 0;

    while (money) {
        if (money >= denominations[i]) {
            const int count = money / denominations[i];
            money -= count * denominations[i];
            change.insert(std::make_pair(denominations[i], count));
        }
        ++i;
    }

    return change;
}
