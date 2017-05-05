#include <cstdio>
#include <string>
#include <vector>

const char space = ' ';
const std::vector<int> cipher = {3, 1, 4, 2};

void swap(char& a, char& b) {
    const char t = a;
    a = b;
    b = t;
}

std::string encrypt(const std::string& message) {
    std::string msg;
    int i = 0;
    int buffer = 0;

    while (i + 4 < message.size()) {
        buffer = 0;
        for (int j = 0; j < 4 + buffer; ++j) {
            if (message[i + j + buffer] == space)
                ++buffer;
            else
                msg += message[i - 1 + cipher[j - buffer]];
        }
        i += 4;
    }

    while (i < message.size()) {
        const int index = i + cipher[i % 4]  - 1;
        if (index < message.size())
            msg += message[i - 1 + cipher[i % 4]];
        else
            msg += 'X';
        ++i;
    }

    return msg;
}

int main() {
    std::string message = "EABW EFRO ATMR ASIN";
    printf("-----------------------------------------------------\n");
    printf("Original Message == [%s]\n", message.c_str());
    printf("Decrypt  Message == [%s]\n", encrypt(message).c_str());
    printf("-----------------------------------------------------\n");

    return 0;
}

