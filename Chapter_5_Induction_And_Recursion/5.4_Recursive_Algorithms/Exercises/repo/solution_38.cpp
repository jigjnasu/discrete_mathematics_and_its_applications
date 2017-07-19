/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 37
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <cstdio>
#include <string>

std::string copy(const std::string& s, int n) {
    if (n == 1)
        return s;
    else
        return s + copy(s, n - 1);
}

int main() {
    const std::string s = "1010";
    for (int n = 1; n < 10; ++n)
        printf("%s\n", copy(s, n).c_str());

    return 0;
}
