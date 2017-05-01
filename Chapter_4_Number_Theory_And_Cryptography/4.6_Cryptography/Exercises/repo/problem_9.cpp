#include <cstdio>
#include <string>
#include <vector>

const char space = ' ';

std::string decrypt(const std::string& message, int k) {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i) {
        if (message[i] == space) {
            msg += message[i];
        } else {
            const int index = message[i] - 'A' - k;
            if (index >= 0)
                msg += index + 'A';
            else
                msg += 26 + index + 'A';
        }
    }

    return msg;
}

int main() {
    const std::string message = "ERC WYJJMGMIRXPC EHZERGIH XIGLRSPSKC MW MRHMWXMRKYMWLEFPI JVSQ QEKMG";
    for (int i = 1; i < 26; ++i)
        printf("i == [%2d] || message == [%s]\n", i, decrypt(message, i).c_str());
    
    return 0;
}
