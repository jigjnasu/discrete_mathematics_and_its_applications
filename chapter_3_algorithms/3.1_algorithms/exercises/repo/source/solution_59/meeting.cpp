#include "meeting.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Meeting::Meeting() : m_hall_number(0) {}

dc::Meeting::Meeting(const dc::Time& start_time, const dc::Time& end_time) :
    m_start_time(start_time), m_end_time(end_time), m_hall_number(0) {}

dc::Meeting::~Meeting() {}

dc::Meeting::Meeting(const dc::Meeting& rhs) {
    m_start_time = rhs.m_start_time;
    m_end_time = rhs.m_end_time;
    m_hall_number = rhs.m_hall_number;
}

dc::Meeting dc::Meeting::operator = (const dc::Meeting& rhs) {
    m_start_time = rhs.m_start_time;
    m_end_time = rhs.m_end_time;
    m_hall_number = rhs.m_hall_number;
    return *this;
}

bool dc::Meeting::operator < (const dc::Meeting& rhs) const {
    return m_start_time < rhs.m_start_time;
}

bool dc::Meeting::operator > (const dc::Meeting& rhs) const {
    return m_start_time > rhs.m_start_time;
}

bool dc::Meeting::operator <= (const dc::Meeting& rhs) const {
    return m_start_time <= rhs.m_start_time;
}

bool dc::Meeting::operator >= (const dc::Meeting& rhs) const {
    return m_start_time >= rhs.m_start_time;
}

bool dc::Meeting::operator == (const dc::Meeting& rhs) const {
    return m_start_time == rhs.m_start_time;
}

bool dc::Meeting::operator != (const dc::Meeting& rhs) const {
    return m_start_time != rhs.m_start_time;
}

dc::Time dc::Meeting::start_time() const {
    return m_start_time;
}

dc::Time dc::Meeting::end_time() const {
    return m_end_time;
}

void dc::Meeting::book_hall(int number) {
    m_hall_number = number;
}

void dc::Meeting::print() const {
    printf("From ");
    m_start_time.print();
    printf(" To ");
    m_end_time.print();
    printf(" at Hall [%d]\n", m_hall_number);
}
