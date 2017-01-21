/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 23
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */


#include <cstdio>
#include <vector>
#include <cmath>

/*
  Let's X -> Y, There is a function F(p) = q,
  p belongs to Y and q belongs to X.
 */

const std::vector<int> X = {1, 2, 3, 4, 5};
const std::vector<int> Y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

int F(int n) {
    return static_cast<int>(std::floor(std::sqrt(n)));
}

bool is_found(int n, int start, int end) {
    if (start <= end) {
        const int mid = (start + end) >> 1;
        if (X[mid] == n)
            return true;
        if (X[mid] > n)
            return is_found(n, start, mid - 1);
        else
            return is_found(n, mid + 1, end);
    }

    return false;
}

void onto(int (*funcPtr)(int)) {
    int hit_count = 0;
    
    for (std::size_t i = 0; i < Y.size(); ++i) {
        if (is_found((*funcPtr)(Y[i]), 0, X.size() - 1))
            ++hit_count;
    }

    if (hit_count == Y.size())
        printf("Function Y is onto from X -> Y\n");
    else
        printf("Function Y is NOT onto from X -> Y\n");
}

int main() {
    onto(&F);

    return 0;
}
