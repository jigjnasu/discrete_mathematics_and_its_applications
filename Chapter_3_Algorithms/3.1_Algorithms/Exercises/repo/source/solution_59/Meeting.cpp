#include "Meeting.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Meeting::Meeting() {}

dc::Meeting::Meeting(const dc::Time& start_time, const dc::Time& end_time) :
    m_start_time(start_time), m_end_time(end_time) {}

dc::Meeting::~Meeting() {}

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

dc::Time dc::Meeting::start_time() const {
    return m_start_time;
}

dc::Time dc::Meeting::end_time() const {
    return m_end_time;
}

void dc::Meeting::print() const {
    printf("From ");
    m_start_time.print();
    printf(" To ");
    m_end_time.print();
    printf("\n");
}
