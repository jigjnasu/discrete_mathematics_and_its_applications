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

int main() {
    printf("------------------------------------------------\n");
    const std::string a = "10237424413392";
    printf("Airline ticket [%s] has [%d] check digit\n", a.c_str(), check_digit(a));

    const std::string b = "00032781811234";
    printf("Airline ticket [%s] has [%d] check digit\n", b.c_str(), check_digit(b));

    const std::string c = "00611232134231";
    printf("Airline ticket [%s] has [%d] check digit\n", c.c_str(), check_digit(c));

    const std::string d = "00193222543435";
    printf("Airline ticket [%s] has [%d] check digit\n", d.c_str(), check_digit(d));    
    
    printf("------------------------------------------------\n");    

    return 0;
}
