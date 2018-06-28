/*
  C++ solution for Problem 19 b.
  Recursive solution 
  Discrete Mathematics and its Applications
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Jan 5th, 2017
*/

#include <cstdio>

int bacteria_population(int hour) {
    if (hour == 0)
        return 100;
    else
        return 3 * bacteria_population(hour - 1);
}

int main() {
    const int hour = 10;
    printf("Total bacterial population grows from [100] to [%d] in [%d] hours\n", bacteria_population(hour), hour);
    
    return 0;
}
