/*
  Discrete Mathematics and It's Applications.
  Chapter 4, Number Theory and Cryptography.
  4.6 Cryptography Example 1
  This is one of the first encrypted message, by Julias Cesar

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 01/05/2017
 */

#include "caesar_cipher.h"
#include <cstdio>

void print(const std::vector<int>& message) {
    for (std::size_t i = 0; i < message.size(); ++i)
        printf("%d ", message[i]);
    printf("\n");
}

void test_caesar_cipher() {
    discrete_mathematics::chapter_4::CaesarCipher caesar;
    const std::string message = "MEETYOUINTHEPARK";
    printf("Original  Message == [%s]\n", message.c_str());
    printf("Encrypted Message == ");
    const std::vector<int> encrypted_message = caesar.encrypt(message);
    print(encrypted_message);
    printf("Decryted Message == [%s]\n", caesar.decrypt(encrypted_message).c_str());
}

int main() {
    test_caesar_cipher();

    return 0;
}
