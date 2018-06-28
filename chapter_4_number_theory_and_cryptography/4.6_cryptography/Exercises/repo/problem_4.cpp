#include "CaesarCipher.h"
#include <cstdio>

std::vector<int> convert(const std::string& message) {
    std::vector<int> msg;
    for (std::size_t i = 0; i < message.size(); ++i)
        msg.push_back(message[i] - 'A');

    return msg;
}

void problem_a() {
    printf("-------------------------------------------\n");
    const std::string message = "EOXHMHDQV";
    discrete_mathematics::chapter_4::CaesarCipher caesar(3, 1);
    printf("Decrypt  Message == [%s]\n", message.c_str());
    printf("Original Message == [%s]\n", caesar.decrypt(convert(message)).c_str());
    printf("-------------------------------------------\n");    
}

void problem_b() {
    printf("-------------------------------------------\n");
    const std::string message = "WHVWWRGDB";
    discrete_mathematics::chapter_4::CaesarCipher caesar(3, 1);
    printf("Decrypt  Message == [%s]\n", message.c_str());
    printf("Original Message == [%s]\n", caesar.decrypt(convert(message)).c_str());
    printf("-------------------------------------------\n");    
}

void problem_c() {
    printf("-------------------------------------------\n");
    const std::string message = "HDWGLPVXP";
    discrete_mathematics::chapter_4::CaesarCipher caesar(3, 1);
    printf("Decrypt  Message == [%s]\n", message.c_str());
    printf("Original Message == [%s]\n", caesar.decrypt(convert(message)).c_str());
    printf("-------------------------------------------\n");    
}

int main() {
    problem_a();
    problem_b();
    problem_c();

    return 0;
}
