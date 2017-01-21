/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 23
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */


#include <cstdio>
#include <vector>
#include <set>

/*
  Let's X -> Y, There is a function F(p) = q,
  p belongs to Y and q belongs to X. and there is a unique solution for every F(p).
 */

const std::vector<int> X = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
const std::vector<int> Y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int F(int n) {
    return n * n;
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

void one_to_one(int (*funcPtr)(int)) {
    int hit_count = 0;
    std::set<int> input;
    std::set<int> output;
    
    for (std::size_t i = 0; i < Y.size(); ++i) {
        input.insert(Y[i]);
        output.insert((*funcPtr)(Y[i]));
        
        if (is_found((*funcPtr)(Y[i]), 0, X.size() - 1))
            ++hit_count;
    }


    if (hit_count     == Y.size() &&
        input.size()  == Y.size() &&
        output.size() == X.size())
        printf("Function Y is one to one from X -> Y\n");
    else
        printf("Function Y is NOT one to one from X -> Y\n");
}

int main() {
    one_to_one(&F);

    return 0;
}
