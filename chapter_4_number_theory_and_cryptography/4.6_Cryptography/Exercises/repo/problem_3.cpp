#include "CaesarCipher.h"
#include <cstdio>

void print(const std::vector<int>& message) {
    for (std::size_t i = 0; i < message.size(); ++i)
        printf("%d ", message[i]);
    printf("\n");
}

std::string convert(const std::vector<int>& message) {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i)
        if (message[i] >= 0)
            msg += message[i] + 'A';
        else
            msg += 26 + message[i] + 'A';

    return msg;
}

void problem_a() {
    printf("-------------------------------------------\n");
    const std::string message = "WATCHYOURSTEP";
    discrete_mathematics::chapter_4::CaesarCipher caesar(14, 1);
    printf("Original  Message == [%s]\n", message.c_str());
    const std::vector<int> msg = caesar.encrypt(message);
    print(msg);
    printf("Encrypted Message == [%s]\n", convert(msg).c_str());
    printf("-------------------------------------------\n");    
}

void problem_b() {
    printf("-------------------------------------------\n");
    const std::string message = "WATCHYOURSTEP";
    discrete_mathematics::chapter_4::CaesarCipher caesar(21, 14);
    printf("Original  Message == [%s]\n", message.c_str());
    const std::vector<int> msg = caesar.encrypt(message);
    print(msg);
    printf("Encrypted Message == [%s]\n", convert(msg).c_str());
    printf("-------------------------------------------\n");        
}

void problem_c() {
    printf("-------------------------------------------\n");
    const std::string message = "WATCHYOURSTEP";
    discrete_mathematics::chapter_4::CaesarCipher caesar(1, -7);
    printf("Original  Message == [%s]\n", message.c_str());
    const std::vector<int> msg = caesar.encrypt(message);
    print(msg);
    printf("Encrypted Message == [%s]\n", convert(msg).c_str());
    printf("-------------------------------------------\n");    
}

int main() {
    problem_a();
    problem_b();
    problem_c();

    return 0;
}
