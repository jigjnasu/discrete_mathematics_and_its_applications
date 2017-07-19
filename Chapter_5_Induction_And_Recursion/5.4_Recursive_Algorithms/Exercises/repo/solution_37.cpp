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

void swap(char& a, char& b) {
    const char c = a;
    a = b;
    b = c;
}

void reverse(std::string& s, std::size_t n) {
    if (n <= (s.size() >> 1)) {
        return;
    } else {
        swap(s[n - 1], s[s.size() - n]);
        reverse(s, n - 1);
    }
}

int main() {
    std::string s = "Rakesh Kumar from New Delhi";
    printf("%s\n", s.c_str());
    reverse(s, s.size());
    printf("%s\n", s.c_str());
    
    return 0;
}
