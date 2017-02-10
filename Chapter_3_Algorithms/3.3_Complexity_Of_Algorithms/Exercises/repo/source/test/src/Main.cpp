#include "TestSuite.h"
#include <cstdio>
#include <map>

int main() {
    discrete_mathematics::chapter_3::TestSuite suite;
    suite.run(7);
    //suite.run_all();
    
    return 0;
}
