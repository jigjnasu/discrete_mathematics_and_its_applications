#include "tower_of_hanoi_iterative.h"
//#include "tower_of_hanoi.h"

int main() {
    TowerOfHanoi<int> tower(10);
    tower.execute();

    return 0;
}
