#include <cstdio>
#include <sstream>
#include <string>

/*
  Airline ticket check digit.
  15th digit = product of 14 digits mod 7
 */

int check_digit(const std::string& message) {
    unsigned long long int m = 0;
    std::istringstream iss(message);
    iss >> m;

    return m % 7;
}

void test(const std::string& message) {
    printf("------------------------------------------------\n");    
    const int check = check_digit(message.substr(0, message.size() - 1));
    if (check + '0' == message[message.size() - 1])
        printf("Airline message [%s] has check digit [%d] is a VALID ticket number\n",
               message.c_str(), check);
    else
        printf("Airline message [%s] has check digit [%d] is NOT a VALID ticket number\n",
               message.c_str(), check);
    printf("------------------------------------------------\n");    
}

int main() {
    const std::string a = "101333341789013";
    test(a);

    const std::string b = "007862342770445";
    test(b);

    const std::string c = "113273438882531";
    test(c);

    const std::string d = "000122347322871";
    test(d);
    
    return 0;
}
