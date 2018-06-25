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

void test(const std::string& message) {
    printf("------------------------------------------\n");
    if (upc_check_digit(message) == 0)
        printf("UPC [%s] message is a VALID one\n", message.c_str());
    else
        printf("UPC [%s] message is NOT a VALID one\n", message.c_str());
    printf("------------------------------------------\n");    
}

int main() {
    const std::string a = "036000291452";
    test(a);

    const std::string b = "012345678903";
    test(b);

    const std::string c = "782421843014";
    test(c);

    const std::string d = "726412175425";
    test(d);

    return 0;
}
