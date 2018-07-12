#include "meeting.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Meeting::Meeting() : m_start_time(0), m_end_time(0) {}

dc::Meeting::~Meeting() {}

dc::Meeting::Meeting(int start, int end) : m_start_time(start), m_end_time(end) {}

dc::Meeting::Meeting(const dc::Meeting& rhs) {
    m_start_time = rhs.m_start_time;
    m_end_time = rhs.m_end_time;
}

dc::Meeting dc::Meeting::operator = (const dc::Meeting& rhs) {
    m_start_time = rhs.m_start_time;
    m_end_time = rhs.m_end_time;
    return *this;
}

bool dc::Meeting::operator < (const dc::Meeting& rhs) const {
    return m_end_time < rhs.m_end_time;
}

bool dc::Meeting::operator > (const dc::Meeting& rhs) const {
    return m_end_time > rhs.m_end_time;
}

bool dc::Meeting::operator <= (const dc::Meeting& rhs) const {
    return m_end_time <= rhs.m_end_time;
}

bool dc::Meeting::operator >= (const dc::Meeting& rhs) const {
    return m_end_time >= rhs.m_end_time;
}

bool dc::Meeting::operator == (const dc::Meeting& rhs) const {
    return m_end_time == rhs.m_end_time;
}

bool dc::Meeting::operator != (const dc::Meeting& rhs) const {
    return m_end_time != rhs.m_end_time;
}

int dc::Meeting::start_time() const {
    return m_start_time;
}

int dc::Meeting::end_time() const {
    return m_end_time;
}

void dc::Meeting::print() const {
    printf("[%2d] to [%2d]\n", m_start_time, m_end_time);
}

