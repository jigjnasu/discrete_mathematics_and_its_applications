#include <cstdio>
#include <string>

int check_digit(const std::string& message) {
    int check = 0;
    for (std::size_t i = 0; i < message.size(); ++i)
        check += (i + 3) * (message[i] - '0');

    return check % 11;
}

void test(const std::string& message) {
    const int check = check_digit(message);
    if (check == 10)
        printf("ISSN [%s] has check digit = [X]\n", message.c_str());
    else
        printf("ISSN [%s] has check digit = [%d]\n", message.c_str(), check);
}

int main() {
    printf("----------------------------------------\n");
    const std::string a = "1570868";
    test(a);
    const std::string b = "1553734";
    test(b);
    const std::string c = "1089708";
    test(c);
    const std::string d = "1383811";
    test(d);
    printf("----------------------------------------\n");

    return 0;
}
