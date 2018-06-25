#include <cstdio>
#include <string>

int upc_check_digit(const std::string& message) {
    int check = 0;
    for (std::size_t i = 0; i < message.size(); ++i)
        if ((i + 1) % 2)
            check += 3 * (message[i] - '0');
        else
            check += message[i] - '0';

    if (check % 10 == 0)
        return 0;
    else
        return 10 - (check % 10);
}

int test(const std::string& message) {
    return upc_check_digit(message);
}

int main() {
    printf("----------------------------------------\n");
    // problem a)
    const std::string a = "73232184434";
    printf("UPC [%s] message check digit == [%d] will make sum mod 10\n", a.c_str(), test(a));

    const std::string b = "63623991346";
    printf("UPC [%s] message check digit == [%d] will make sum mod 10\n", b.c_str(), test(b));

    const std::string c = "04587320720";
    printf("UPC [%s] message check digit == [%d] will make sum mod 10\n", c.c_str(), test(c));

    const std::string d = "93764323341";
    printf("UPC [%s] message check digit == [%d] will make sum mod 10\n", d.c_str(), test(d));    
    printf("----------------------------------------\n");

    return 0;
}
