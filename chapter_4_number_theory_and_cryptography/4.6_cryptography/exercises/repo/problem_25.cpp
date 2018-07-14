#include "integer.h"
#include <cstdio>
#include <string>
#include <sstream>

utility::integer::Integer power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        const utility::integer::Integer t = power(x, y / 2);
        if (y % 2)
            return t * t * x;
        else
            return t * t;
    }
}

std::string to_string(int n) {
    std::ostringstream oss;
    oss << n;
    return oss.str();
}

std::string convert(const std::string& message) {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i) {
        const int index = message[i] - 'A';
        if (index < 10) {
            msg += '0';
            msg += index + '0';
        } else {
            msg += (index / 10) + '0';
            msg += (index % 10) + '0';
        }
    }

    return msg;
}

void encrypt(const std::string& message) {
    const int p = 53;
    const int q = 61;
    const int e = 17;
    const int n = p * q;
    const std::string msg = convert(message);

    std::string cipher;
    for (std::size_t i = 0; i < msg.size(); i += 4) {
        const int x = std::atoi(msg.substr(i, 4).c_str());
        utility::integer::Integer m = power(x, e);
        utility::integer::Integer a = m / n;
        utility::integer::Integer r = m - a * n;
        cipher += r.get();
        cipher += ' ';
    }

    printf("Encrypted message == [%s]\n", cipher.c_str());
}

int main() {
    printf("--------------------------------------------------\n");
    std::string msg = "UPLOAD";
    encrypt(msg);
    printf("--------------------------------------------------\n");

    return 0;
}
