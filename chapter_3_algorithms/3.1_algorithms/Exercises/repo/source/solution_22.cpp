/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 22
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 19th, 2017
 */

/*
  I will use double pointer mechanism, first will have start point and the next one will have
  end point, calculate the difference and save to start and end if it is maximum.
  The time complexity is O(n)
 */

#include <cstdio>
#include <string>

bool is_alpha(char c) {
    bool result = false;
    if (c >= 'a' && c <= 'z' ||
        c >= 'A' && c <= 'Z')
        result = true;

    return result;
}

std::string max_word(const std::string& str) {
    int max = 0;
    int start = 0;
    int end = 0;

    int i = 0;
    int j = 0;

    while (i < str.size()) {
        j = i;
        while (j < str.size() && is_alpha(str[j])) ++j;

        if (j - i > max) {
            max = j - i;
            start = i;
            end = j - 1;
        }
        
        if (i == j)
            ++j;

        i = j;
    }

    return str.substr(start, end - start + 1);
}

void test_max_word() {
    std::string s1 = "Hansraj Model School, Punjabi Bagh New Delhi";
    std::string s2 = "I love mathematics and 0.5";
    std::string s3 = "What is the next big thing?";
    std::string s4 = "Life is beautiful ! Isnt it?";
    std::string s5 = "Discrete Mathematics and Its Applications by Rosen";
    std::string s6 = "Lets make the big word at the end DelhiFromIndia";
    std::string s7 = "AlbertAndNewton are great, big first word";        

    printf("Maximum word from [%s] == [%s]\n", s1.c_str(), max_word(s1).c_str());
    printf("Maximum word from [%s] == [%s]\n", s2.c_str(), max_word(s2).c_str());
    printf("Maximum word from [%s] == [%s]\n", s3.c_str(), max_word(s3).c_str());
    printf("Maximum word from [%s] == [%s]\n", s4.c_str(), max_word(s4).c_str());
    printf("Maximum word from [%s] == [%s]\n", s5.c_str(), max_word(s5).c_str());
    printf("Maximum word from [%s] == [%s]\n", s6.c_str(), max_word(s6).c_str());
    printf("Maximum word from [%s] == [%s]\n", s7.c_str(), max_word(s7).c_str());    
}

int main() {
    test_max_word();
    
    return 0;
}
