/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 9
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

#include <cstdio>
#include <string>

bool is_palindrome(const std::string& str) {
    int i = 0;
    int j = str.size() - 1;

    while (i < j)
        if (str[i++] != str[j--])
            return false;

    return true;
}

int main() {
    std::string str = "rakesh";
    if (is_palindrome(str))
        printf("[%s] is a palindrome\n", str.c_str());
    else
        printf("[%s] is not a palindrome\n", str.c_str());
    
    return 0;
}
