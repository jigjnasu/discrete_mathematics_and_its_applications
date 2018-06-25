#include "Time.h"
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

dc::Time::Time() : m_hours(0), m_minutes(0), m_seconds(0) {}

dc::Time::Time(const std::string& time) {
    const std::size_t pos_m = time.find(":");
    if (pos_m != std::string::npos) {
        m_hours = std::atoi(time.substr(0, pos_m).c_str());
        const std::size_t pos_s = time.find(":", pos_m + 1);
        if (pos_s != std::string::npos) {
            m_minutes = std::atoi(time.substr(pos_m + 1, pos_s).c_str());
            m_seconds = std::atoi(time.substr(pos_s + 1, time.size() - 1).c_str());
        } else {
            m_minutes = std::atoi(time.substr(pos_m + 1, time.size()).c_str());
            m_seconds = 0;
        }
    } else {
        m_hours = std::atoi(time.c_str());
        m_minutes = m_seconds = 0;
    }
}

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

void dc::Time::print() const {
    printf("[%02d",  m_hours);
    printf(":%02d",  m_minutes);
    printf(":%02d]", m_seconds);
}
