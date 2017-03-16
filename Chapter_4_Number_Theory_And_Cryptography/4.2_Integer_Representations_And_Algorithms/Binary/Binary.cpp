#include "Binary.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_4;

dc::Binary::Binary() {}

dc::Binary::Binary(int n) {
    while (n) {
        m_data.push_back((n % 2) + '0');
        n >>= 1;
    }
}

dc::Binary::Binary(const std::string& n) {
    for (int i = n.size() - 1; i >= 0; --i)
        m_data.push_back(n[i]);
}

dc::Binary::Binary(const dc::Binary& rhs) {
    if (m_data.size())
        m_data.erase(m_data.begin(), m_data.end());
    
    for (std::size_t i = 0; i < rhs.m_data.size(); ++i)
        m_data.push_back(rhs.m_data[i]);
}

dc::Binary::~Binary() {}

dc::Binary& dc::Binary::operator = (const dc::Binary& rhs) {
    if (m_data.size())
        m_data.erase(m_data.begin(), m_data.end());

    for (std::size_t i = 0; i < rhs.m_data.size(); ++i)
        m_data.push_back(rhs.m_data[i]);

    return *this;
}

dc::Binary dc::Binary::operator + (const dc::Binary& rhs) const {
    dc::Binary number;

    std::size_t i = 0;
    std::size_t j = 0;
    int c = 0;

    while (i < m_data.size() && j < rhs.m_data.size()) {
        const int d_a = m_data[i++] - '0';
        const int d_b = rhs.m_data[j++] - '0';
        const int d = (d_a + d_b + c) >> 1;
        number.m_data.push_back(((d_a + d_b + c) - 2 * d) + '0');
        c = d;
    }

    while (i < m_data.size()) {
        const int d_a = m_data[i++] - '0';
        const int d = (d_a + c) >> 1;
        number.m_data.push_back(((d_a + c) - 2 * d) + '0');
        c = d;
    }

    while (j < rhs.m_data.size()) {
        const int d_b = rhs.m_data[j++] - '0';
        const int d = (d_b + c) >> 1;
        number.m_data.push_back(((d_b + c) - 2 * d) + '0');
        c = d;
    }

    if (c)
        number.m_data.push_back('1');

    return number;
}

// This algorithm only works where a and b both are positive binary numbers
// Where a, b > 0 and belongs to Z+
dc::Binary dc::Binary::operator - (const dc::Binary& rhs) const {
    const dc::Binary a = m_max(*this, rhs);
    const dc::Binary b = m_min(*this, rhs);
    dc::Binary c;

    int borrow = 0;
    std::size_t i = 0;
    while (i < b.m_data.size()) {
        const int d_a = a.m_data[i] - '0';
        const int d_b = b.m_data[i] - '0';
        
        if (d_a - borrow >= d_b) {
            c.m_data.push_back((d_a - borrow - d_b) + '0');
            borrow = 0;
        } else {
            c.m_data.push_back((d_a + 2 - borrow - d_b) + '0');
            borrow = 1;
        }
        ++i;
    }

    while (i < a.m_data.size() && a.m_data[i] == '0' && borrow) {
        c.m_data.push_back('1');
        ++i;
    }

    if (i < a.m_data.size() && borrow) {
        c.m_data.push_back('0');
        ++i;
    }

    while (i < a.m_data.size())
        c.m_data.push_back(a.m_data[i++]);
    
    return c;
}

dc::Binary dc::Binary::operator * (const dc::Binary& rhs) const {
    dc::Binary number;
    for (std::size_t i = 0; i < m_data.size(); ++i) {
        dc::Binary temp;
        
        // Shift the number first
        for (std::size_t k = 0; k < i; ++k)
            temp.m_data.push_back('0');
        
        for (std::size_t j = 0; j < rhs.m_data.size(); ++j)
            // Multiply every element of b with a
            temp.m_data.push_back(((m_data[i] - '0') & (rhs.m_data[j] - '0')) + '0');

        number += temp;
    }
    
    return number;
}

void dc::Binary::operator += (const dc::Binary& rhs) {
    std::size_t i = 0;
    std::size_t j = 0;
    int c = 0;

    while (i < m_data.size() && j < rhs.m_data.size()) {
        const int d_a = m_data[i] - '0';
        const int d_b = rhs.m_data[j++] - '0';
        const int d = (d_a + d_b + c) >> 1;
        m_data[i++] = ((d_a + d_b + c) - 2 * d) + '0';
        c = d;
    }

    while (i < m_data.size()) {
        const int d_a = m_data[i] - '0';
        const int d = (d_a + c) >> 1;
        m_data[i++] = ((d_a + c) - 2 * d) + '0';
        c = d;
    }

    while (j < rhs.m_data.size()) {
        const int d_b = rhs.m_data[j++] - '0';
        const int d = (d_b + c) >> 1;
        m_data.push_back(((d_b + c) - 2 * d) + '0');
        c = d;
    }

    if (c)
        m_data.push_back('1');
}

void dc::Binary::operator -= (const dc::Binary& rhs) {
    
}

void dc::Binary::operator *= (const dc::Binary& rhs) {
    for (std::size_t i = 0; i < m_data.size(); ++i) {
        dc::Binary temp;
        
        // Shift the number first
        for (std::size_t k = 0; k < i; ++k)
            temp.m_data.push_back('0');
        
        for (std::size_t j = 0; j < rhs.m_data.size(); ++j)
            // Multiply every element of b with a
            temp.m_data.push_back(((m_data[i] - '0') & (rhs.m_data[j] - '0')) + '0');

        *this += temp;
    }
}

bool dc::Binary::operator > (const dc::Binary& rhs) const {
    if (m_data.size() > rhs.m_data.size())
        return true;
    else if (m_data.size() < rhs.m_data.size())
        return false;
    
    for (int i = m_data.size() - 1; i >= 0; --i)
        if (m_data[i] > rhs.m_data[i])
            return true;
        else if (m_data[i] < rhs.m_data[i])
            return false;
    
    return false;
}

bool dc::Binary::operator < (const dc::Binary& rhs) const {
    if (m_data.size() < rhs.m_data.size())
        return true;
    else if (m_data.size() > rhs.m_data.size())
        return false;
    
    for (int i = m_data.size() - 1; i >= 0; --i)
        if (m_data[i] < rhs.m_data[i])
            return true;
        else if (m_data[i] > rhs.m_data[i])
            return false;
    
    return false;
}

bool dc::Binary::operator == (const dc::Binary& rhs) const {
    if (m_data.size() != rhs.m_data.size())
        return false;

    for (std::size_t i = 0; i < m_data.size(); ++i)
        if (m_data[i] != rhs.m_data[i])
            return false;

    return true;
}

bool dc::Binary::operator != (const dc::Binary& rhs) const {
    return !(*this == rhs);
}

int dc::Binary::decimal() const {
    int number = 0;
    for (std::size_t i = 0; i < m_data.size(); ++i)
        if (m_data[i] == '1')
            number += (1 << i);

    return number;
}

void dc::Binary::print() const {
    for (int i = m_data.size() - 1; i >= 0; --i)
        printf("%c ", m_data[i]);
}

dc::Binary dc::Binary::m_min(const dc::Binary& a, const dc::Binary& b) const {
    return a < b ? a : b;
}

dc::Binary dc::Binary::m_max(const dc::Binary& a, const dc::Binary& b) const {
    return a > b ? a : b;
}
