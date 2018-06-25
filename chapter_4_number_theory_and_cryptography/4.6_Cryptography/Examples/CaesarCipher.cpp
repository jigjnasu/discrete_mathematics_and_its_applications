#include "CaesarCipher.h"

discrete_mathematics::chapter_4::CaesarCipher::CaesarCipher() : m_key(3) {}

discrete_mathematics::chapter_4::CaesarCipher::CaesarCipher(int key) : m_key(key) {}

discrete_mathematics::chapter_4::CaesarCipher::~CaesarCipher() {}

std::vector<int> discrete_mathematics::chapter_4::CaesarCipher::encrypt(const std::string& message) const {
    std::vector<int> msg;
    for (std::size_t i = 0; i < message.size(); ++i)
        msg.push_back((message[i] - 'A' + m_key) % 26);
    return msg;
}

std::string discrete_mathematics::chapter_4::CaesarCipher::decrypt(const std::vector<int>& message) const {
    std::string msg;
    for (std::size_t i = 0; i < message.size(); ++i) {
        const int index = message[i] - m_key;
        if (index >= 0)
            msg += (index % 26) + 'A';
        else
            msg += (26 + index) + 'A';
    }

    return msg;
}
