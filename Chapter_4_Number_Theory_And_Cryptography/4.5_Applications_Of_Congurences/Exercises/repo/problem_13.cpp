#include <cstdio>
#include <string>

bool is_error(const std::string& message) {
    int total = 0;
    int i = 0;
    while (i < message.size() - 1)
        total += message[i++] - '0';
    return message[i] == (total % 2) + '0' ? false : true;
}

void test(const std::string& message) {
    if (is_error(message))
        printf("[%s] message is NOT valid\n", message.c_str());
    else
        printf("[%s] message is okay !!!!\n", message.c_str());
}

int main() {
    printf("---------------------------------------\n");
    const std::string a = "00000111111";
    test(a);
    const std::string b = "10101010101";
    test(b);
    const std::string c = "11111100000";
    test(c);
    const std::string d = "10111101111";
    test(d);
    printf("---------------------------------------\n");
    

    return 0;
}
