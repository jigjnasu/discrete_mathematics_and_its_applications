#include <cstdio>
#include <cmath>
#include <string>

const char space = ' ';

std::string encrypt(const std::string& message) {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i) {
        if (message[i] == space)
            msg += space;
        else
            msg += (((15 * (message[i] - 'A')) + 13) % 26) + 'A';
    }
         
    return msg;
}

std::string decrypt(const std::string& message) {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i) {
        if (message[i] == space) {
            msg += space;
        } else {
            const int index = (7 * (message[i] - 'A') - 91) % 26;
            if (index >= 0)
                msg += index + 'A';
            else
                msg += 26 + index + 'A';
        }
    }

    return msg;
}

void test() {
    printf("-----------------------------------------------------------------\n");
    const std::string message = "HANSRAJ MODEL SCHOOL PUNJABI BAGH NEW DELHI";
    printf("Original Message == [%s]\n", message.c_str());
    const std::string e_msg   = encrypt(message);
    printf("Encrypt  Message == [%s]\n", e_msg.c_str());
    printf("Decrypt  Message == [%s]\n", decrypt(e_msg).c_str());
    printf("-----------------------------------------------------------------\n");
}

int main() {
    test();
    
    return 0;
}
