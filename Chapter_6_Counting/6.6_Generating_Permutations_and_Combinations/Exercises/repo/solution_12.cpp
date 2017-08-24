/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.6 Generating Permutations and Combinations
  Solution 12
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  25/08/2017
 */

#include <cstdio>
#include <string>

inline void swap(char& a, char& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

// Let's permute the set s = {};
void permute(std::string& s) {
    printf("---------------------------------\n");
    while (1) {
        printf("%s\n", s.c_str());

        int i = s.size() - 2;
        while (i >= 0 && s[i] > s[i + 1])
            --i;
        if (i < 0) break;

        int j = s.size() - 1;
        while (s[i] > s[j])
            --j;

        swap(s[i], s[j]);
        
        int f = i + 1;
        int l = s.size() - 1;

        while (f < l) {
            if (s[f] > s[l])
                swap(s[f], s[l]);
            ++f;
            --l;
        }
    }
    printf("---------------------------------\n");
}

void r_permute(std::string& s, int r) {
    for (std::size_t i = 0; i <= s.size() - r; ++i) {
        for (std::size_t j = i + 1; j <= s.size() - r + 1; ++j) {
            for (std::size_t k = j + r - 2; k < s.size(); ++k) {
                std::string p;
                p = s[i];
                p += s.substr(j, r - 2);                
                p += s[k];
                permute(p);
            }
        }
    }
}

int main() {
    std::string s = "123456789";
    r_permute(s, 3);
    return 0;
}
