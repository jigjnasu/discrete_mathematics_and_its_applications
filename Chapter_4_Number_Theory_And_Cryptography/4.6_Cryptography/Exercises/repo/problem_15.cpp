#include <cstdio>
#include <string>
#include <vector>

const int block = 4;
const char space = ' ';
const std::vector<int> cipher = {3, 1, 4, 2};

void swap(char& a, char& b) {
    const char t = a;
    a = b;
    b = t;
}

void strip(std::string& message) {
    for (std::size_t i = 0; i < message.size(); ++i)
        if (space == message[i])
            message.erase(message.begin() + i);
}

void print(const std::string& message) {
    printf("[%c", message[0]);
    for (std::size_t i = 1; i < message.size(); ++i) {
        if (i % block == 0)
            printf(" %c", message[i]);
        else
            printf("%c", message[i]);
    }
    
    printf("]\n");
}

std::string encrypt(std::string& message) {
    strip(message);
    std::string msg;
    int i = 0;

    while (i + block < message.size()) {
        for (int j = 0; j < block; ++j)
            msg += message[i - 1 + cipher[j]];
        i += block;
    }

    for (int j = 0; j < block; ++j) {
        const int index = i + (cipher[j]  - 1);
        if (index < message.size())
            msg += message[index];
        else
            msg += 'X';
    }

    return msg;
}

int main() {
    std::string message = "EABW EFRO ATMR ASIN";
    printf("-----------------------------------------------------\n");
    printf("Original Message == [%s]\n", message.c_str());
    printf("Decrypt  Message == ");
    print(encrypt(message));
    printf("-----------------------------------------------------\n");

    return 0;
}

