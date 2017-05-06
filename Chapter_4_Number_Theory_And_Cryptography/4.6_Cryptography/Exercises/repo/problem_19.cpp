#include <cstdio>
#include <string>

void encrypt(std::string& message, const std::string& key) {
    for (std::size_t i = 0; i < message.size(); ++i)
        message[i] = (((message[i] - 'A') + (key[i % key.size()]) - 'A') % 26) + 'A';
}

void decrypt(std::string& message, const std::string& key) {
    for (std::size_t i = 0; i < message.size(); ++i) {
        const int index = (message[i] - 'A') - (key[i % key.size()] - 'A');
        if (index >= 0)
            message[i] = (index % 26) + 'A';
        else
            message[i] = (26 + index) + 'A';
    }
}

int main() {
    const std::string key = "HOT";
    std::string message = "OIKYWVHBX";

    printf("---------------------------------------------------------------\n");
    printf("key == [%s] || encrypted message == [%s]\n", key.c_str(), message.c_str());
    decrypt(message, key);
    printf("key == [%s] || decrypt   message == [%s]\n", key.c_str(), message.c_str());    
    printf("---------------------------------------------------------------\n");
    
    return 0;
}
