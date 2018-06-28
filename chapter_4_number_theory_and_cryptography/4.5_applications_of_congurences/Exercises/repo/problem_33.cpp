#include <cstdio>
#include <string>

int check_digit(const std::string& message) {
    int check = 0;
    for (std::size_t i = 0; i < message.size(); ++i)
        check += (i + 3) * (message[i] - '0');

    return check % 11;
}

void test(const std::string& message) {
    const int check = check_digit(message.substr(0, message.size() - 1));
    if (message[message.size() - 1] == 'X')
        if (check == 10)
            printf("ISSN [%s] has a check digit [%d] is a VALID one\n", message.c_str(), check);
        else 
            printf("ISSN [%s] has a check digit [%d] is NOT a VALID one\n", message.c_str(), check);
    else
        if (check + '0' == message[message.size() - 1])
            printf("ISSN [%s] has a check digit [%d] is a VALID one\n", message.c_str(), check);
        else 
            printf("ISSN [%s] has a check digit [%d] is NOT a VALID one\n", message.c_str(), check);        
}

int main() {
    printf("----------------------------------------\n");
    const std::string a = "10591027";
    test(a);
    const std::string b = "00029890";
    test(b);
    const std::string c = "15308669";
    test(c);
    const std::string d = "1007120X";
    test(d);
    printf("----------------------------------------\n");

    return 0;
}
