/*
  Discrete Mathematics and It's Applications.
  Chapter 4, Number Theory and Cryptography.
  4.6 Cryptography Example 1
  This is one of the first encrypted message, by Julias Cesar

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 01/05/2017
 */

#include <cstdio>
#include <string>
#include <vector>

void print(const std::vector<int>& message) {
    for (std::size_t i = 0; i < message.size(); ++i)
        printf("%d ", message[i]);
    printf("\n");
}

std::vector<int> encrypt(const std::string& message) {
    std::vector<int> msg;
    for (std::size_t i = 0; i < message.size(); ++i)
        msg.push_back(((message[i] - 'A') + 3) % 26);

    return msg;
}

std::string decrept(const std::vector<int>& message) {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i) {
        const int index = message[i] - 3;
        if (index >= 0)
            msg += (index % 26) + 'A';
        else
            msg += (26 + index) + 'A';
    }

    return msg;
}

void test_caesar_cipher() {
    const std::string message = "MEETYOUINTHEPARK";
    printf("Original  Message == [%s]\n", message.c_str());
    printf("Encrypted Message == ");
    const std::vector<int> encrypted_message = encrypt(message);
    print(encrypted_message);
    printf("Decryted Message == [%s]\n", decrept(encrypted_message).c_str());    
}

int main() {
    test_caesar_cipher();

    return 0;
}
