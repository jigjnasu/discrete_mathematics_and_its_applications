/*
  Discrete Mathematics and It's Applications.
  Chapter 4, Number Theory and Cryptography.
  4.6 Cryptography Example 2
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

std::vector<int> convert(const std::string& message) {
    std::vector<int> msg;
    for (std::size_t i = 0; i < message.size(); ++i)
        msg.push_back(message[i] - 'A');
    return msg;
}

void test_caesar_cipher() {
    discrete_mathematics::chapter_4::CaesarCipher caesar(7);
    const std::string message = "LEWLYPLUJLPZHNYLHAALHJOLY";
    printf("Original  Message == [%s]\n", message.c_str());
    printf("Decryted  Message == [%s]\n", caesar.decrypt(convert(message)).c_str());
}

int main() {
    test_caesar_cipher();

    return 0;
}
