#include <cstdio>
#include <string>
#include <vector>

const std::vector<int> cipher = {3, 5, 1, 2, 4};

void swap(char& a, char& b) {
    const char t = a;
    a = b;
    b = t;
}

std::string encrypt(const std::string& message) {
    std::string msg;
    int i = 0;

    while (i + 5 < message.size()) {
        for (int j = 0; j < 5; ++j)
            msg += message[i - 1 + cipher[j]];
        i += 5;
    }

    while (i < message.size()) {
        const int index = i + cipher[i % 5]  - 1;
        if (index < message.size())
            msg += message[i - 1 + cipher[i % 5]];
        else
            msg += 'X';
        ++i;
    }

    return msg;
}

int main() {
    std::string message = "GRIZZLY BEARS";
    printf("-----------------------------------------------------\n");
    printf("Original Message == [%s]\n", message.c_str());
    printf("Decrypt  Message == [%s]\n", encrypt(message).c_str());
    printf("-----------------------------------------------------\n");

    return 0;
}
