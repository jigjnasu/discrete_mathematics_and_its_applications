#include "Hash.h"
#include <cstdio>
#include <vector>

int main() {
    discrete_mathematics::chapter_4::Hash h(31);
    std::vector<int> cars = {317, 918, 7, 100, 111, 310};

    printf("---------------------------------------------------------\n");
    for (std::size_t i = 0; i < cars.size(); ++i)
        printf("Car with plate number [%3d] can be parked at spot == [%2d]\n",
               cars[i], h.location(cars[i]));
    printf("---------------------------------------------------------\n");
    
    return 0;
}
