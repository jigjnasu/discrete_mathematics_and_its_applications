#include "time.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Time::Time() : m_hours(0), m_minutes(0), m_seconds(0) {}

dc::Time::Time(int hours) : m_hours(hours), m_minutes(0), m_seconds(0) {}

dc::Time::Time(int hours, int minutes) : m_hours(hours), m_minutes(minutes), m_seconds(0) {}

dc::Time::Time(int hours, int minutes, int seconds) :
    m_hours(hours), m_minutes(minutes), m_seconds(seconds) {}

dc::Time::~Time() {}

dc::Time::Time(const Time& rhs) {
    m_hours = rhs.m_hours;
    m_minutes = rhs.m_minutes;
    m_seconds = rhs.m_seconds;
}

dc::Time dc::Time::operator = (const dc::Time& rhs) {
    m_hours = rhs.m_hours;
    m_minutes = rhs.m_minutes;
    m_seconds = rhs.m_seconds;
    return *this;
}

bool dc::Time::operator < (const dc::Time& rhs) const {
    if (m_hours == rhs.m_hours) {
        if (m_minutes == rhs.m_minutes)
            return m_seconds < rhs.m_seconds;
        else
            return m_minutes < rhs.m_minutes;
    }

    return m_hours < rhs.m_hours;
}

bool dc::Time::operator > (const dc::Time& rhs) const {
    if (m_hours == rhs.m_hours) {
        if (m_minutes == rhs.m_minutes)
            return m_seconds > rhs.m_seconds;
        else
            return m_minutes > rhs.m_minutes;
    }

    return m_hours > rhs.m_hours;
}

bool dc::Time::operator <= (const dc::Time& rhs) const {
    if (m_hours == rhs.m_hours) {
        if (m_minutes == rhs.m_minutes)
            return m_seconds <= rhs.m_seconds;
        else
            return m_minutes <= rhs.m_minutes;
    }

    return m_hours <= rhs.m_hours;
}

bool dc::Time::operator >= (const dc::Time& rhs) const {
    if (m_hours == rhs.m_hours) {
        if (m_minutes == rhs.m_minutes)
            return m_seconds >= rhs.m_seconds;
        else
            return m_minutes >= rhs.m_minutes;
    }

    return m_hours >= rhs.m_hours;
}

bool dc::Time::operator == (const dc::Time& rhs) const {
    if ((m_hours == rhs.m_hours) &&
        (m_minutes == rhs.m_seconds) &&
        (m_seconds == rhs.m_seconds))
        return true;

    return false;
}

bool dc::Time::operator != (const dc::Time& rhs) const {
    if ((m_hours == rhs.m_hours) &&
        (m_minutes == rhs.m_seconds) &&
        (m_seconds == rhs.m_seconds))
        return false;

    return true;
}

int dc::Time::hours() const {
    return m_hours;
}

int dc::Time::minutes() const {
    return m_minutes;
}

int dc::Time::seconds() const {
    return m_seconds;
}

void dc::Time::print() const {
    printf("[%2d", m_hours);
    printf(":%2d", m_minutes);
    printf(":%2d]", m_seconds);
}
