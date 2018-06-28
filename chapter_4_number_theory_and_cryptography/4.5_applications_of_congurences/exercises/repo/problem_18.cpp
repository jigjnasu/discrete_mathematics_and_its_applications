#include <cstdio>
#include <string>

int check_digit(const std::string& usps) {
    int check = 0;
    for (std::size_t i = 0; i < usps.size(); ++i)
        check += usps[i] - '0';
    return check % 9;
}

void test(const std::string& usps) {
    printf("Check digit for USPS [%12s] == [%d]\n", usps.c_str(), check_digit(usps));
}

int main() {
    const std::string a = "7555618873";
    test(a);

    const std::string b = "6966133421";
    test(b);

    const std::string c = "8018927435";
    test(c);

    const std::string d = "3289744134";
    test(d);

    return 0;
}
