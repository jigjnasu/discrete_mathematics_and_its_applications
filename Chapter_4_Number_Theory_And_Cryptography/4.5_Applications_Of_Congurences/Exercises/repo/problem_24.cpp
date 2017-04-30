#include <cstdio>
#include <string>

int upc_check_digit(const std::string& message) {
    int check = 0;
    for (std::size_t i = 0; i < message.size(); ++i)
        if ((i + 1) % 2)
            check += 3 * (message[i] - '0');
        else
            check += message[i] - '0';

    return check % 10;
}

int test(const std::string& message) {
    return upc_check_digit(message);
}

int main() {
    printf("----------------------------------------\n");
    // problem a)
    const std::string a = "73232184434";
    printf("UPC [%s] message check digit == [%d]\n", a.c_str(), test(a));

    const std::string b = "63623991346";
    printf("UPC [%s] message check digit == [%d]\n", b.c_str(), test(b));

    const std::string c = "04587320720";
    printf("UPC [%s] message check digit == [%d]\n", c.c_str(), test(c));

    const std::string d = "93764323341";
    printf("UPC [%s] message check digit == [%d]\n", d.c_str(), test(d));    
    printf("----------------------------------------\n");

    return 0;
}
