/*
  Discrete Mathematics and Its Applications by (Kenneth H. Rosen)
  Chapter 3.1
  Solution for problem 52
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: Jan 26th, 2017
 */

#include <cstdio>
#include <vector>
#include <map>
#include <string>

const std::vector<int> coins = {1, 5, 10, 25};
const std::vector<std::string> str_coins = {"Penny", "Nickel", "Dime", "Quarter"};

std::string str_coin(int value) {
    switch (value) {
    case 1:  return "Penny";
    case 5:  return "Nickel";
    case 10: return "Dime";
    case 25: return "Quarter";
    default:
        printf("Invalid option\n");
    }
}

void print(const std::map<int, int>& change) {
    printf("-----------------------------------------------\n");
    for (std::map<int, int>::const_iterator it = change.begin();
         it != change.end(); ++it) {
        printf("[%3d] [%10s] == [%8d]\n", it->second, str_coin(it->first).c_str(), it->first * it->second);
    }
    printf("-----------------------------------------------\n");    
}

std::map<int, int> get_change(int value) {
    std::map<int, int> result;
    int i = coins.size() - 1;
    for (int i = coins.size() - 1; i >= 0 && value; --i) {
        while (value >= coins[i]) {
            ++result[coins[i]];
            value -= coins[i];
        }
    }

    return result;
}


int main() {
    const int a = 87;
    printf("[%d] can be exchanged with least coins as follows:--\n", a);
    print(get_change(a));

    const int b = 49;
    printf("[%d] can be exchanged with least coins as follows:--\n", b);
    print(get_change(b));

    const int c = 99;
    printf("[%d] can be exchanged with least coins as follows:--\n", c);
    print(get_change(c));    

    const int d = 33;
    printf("[%d] can be exchanged with least coins as follows:--\n", d);
    print(get_change(d));

    return 0;
}
