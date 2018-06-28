#include "Hash.h"
#include <cstdio>
#include <vector>

int main() {
    discrete_mathematics::chapter_4::Hash h(4969);
    std::vector<int> employees = {132489971, 509496993, 546332190,
                                  34367980, 47900151, 329938157,
                                  212228844, 325510778, 353354519, 53708912};

    printf("---------------------------------------------------------\n");
    for (std::size_t i = 0; i < employees.size(); ++i)
        printf("Employee with social security number [%12d] have memory address == [%5d]\n",
               employees[i], h.location(employees[i]));
    printf("---------------------------------------------------------\n");
    
    return 0;
}
