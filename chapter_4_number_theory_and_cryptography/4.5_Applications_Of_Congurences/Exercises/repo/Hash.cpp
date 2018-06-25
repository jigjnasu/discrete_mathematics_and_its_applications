#include "Hash.h"

discrete_mathematics::chapter_4::Hash::Hash() : m_mod(0) {}

discrete_mathematics::chapter_4::Hash::Hash(int m) : m_mod(m) {
    for (int i = 0; i < m; ++i)
        m_memory.push_back(0);
}

discrete_mathematics::chapter_4::Hash::~Hash() {}

int discrete_mathematics::chapter_4::Hash::location(int key) {
    int i = 0;
    while (m_memory[(key + i) % m_mod] != 0)
        ++i;
    m_memory[(key + i) % m_mod] = key;
    return (key + i) % m_mod;
}
