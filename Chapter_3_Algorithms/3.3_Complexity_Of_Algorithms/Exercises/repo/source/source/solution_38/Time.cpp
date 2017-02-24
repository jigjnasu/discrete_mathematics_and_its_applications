#include "Time.h"
#include <cstdlib>
#include <cstdio>

namespace ds = discrete_mathematics::chapter_3::solution_38;

ds::Time::Time() : m_hour(0), m_minute(0), m_second(0) {}

ds::Time::Time(const std::string& time) {
    std::size_t pos = time.find(":");
    if (pos != std::string::npos) {
        m_hour = std::atoi(time.substr(0, pos).c_str());

        std::size_t pos_next = time.find(":", pos + 1);
        if (pos_next != std::string::npos) {
            m_minute = std::atoi(time.substr(pos + 1, pos_next).c_str());
            m_second = std::atoi(time.substr(pos_next + 1, time.size()).c_str());
        } else {
            m_minute = std::atoi(time.substr(pos + 1, time.size()).c_str());
            m_second = 0;
        }
    }
}

ds::Time::~Time() {}

void ds::Time::print() const {
    printf("%02d:%02d:%02d", m_hour, m_minute, m_second);
}

bool ds::Time::operator < (const ds::Time& rhs) const {
    if (m_hour == rhs.m_hour) {
        if (m_minute == rhs.m_minute) {
            if (m_second < rhs.m_second)
                return true;
        } else {
            if (m_minute < rhs.m_minute)
                return true;
        }
    } else {
        if (m_hour < rhs.m_hour)
            return true;
    }

    return false;
}

bool ds::Time::operator > (const ds::Time& rhs) const {
    if (m_hour == rhs.m_hour) {
        if (m_minute == rhs.m_minute) {
            if (m_second > rhs.m_second)
                return true;
        } else {
            if (m_minute > rhs.m_minute)
                return true;
        }
    } else {
        if (m_hour > rhs.m_hour)
            return true;
    }

    return false;
}

bool ds::Time::operator <= (const ds::Time& rhs) const {
    if (m_hour == rhs.m_hour) {
        if (m_minute == rhs.m_minute) {
            if (m_second <= rhs.m_second)
                return true;
        } else {
            if (m_minute <= rhs.m_minute)
                return true;
        }
    } else {
        if (m_hour <= rhs.m_hour)
            return true;
    }

    return false;
}

bool ds::Time::operator >= (const ds::Time& rhs) const {
    if (m_hour == rhs.m_hour) {
        if (m_minute == rhs.m_minute) {
            if (m_second >= rhs.m_second)
                return true;
        } else {
            if (m_minute >= rhs.m_minute)
                return true;
        }
    } else {
        if (m_hour >= rhs.m_hour)
            return true;
    }

    return false;
}

bool ds::Time::operator == (const ds::Time& rhs) const {
    if (m_hour == rhs.m_hour &&
        m_minute == rhs.m_minute &&
        m_second == rhs.m_second)
        return true;
    else
        return false;
}

bool ds::Time::operator != (const ds::Time& rhs) const {
    if (m_hour == rhs.m_hour &&
        m_minute == rhs.m_minute &&
        m_second == rhs.m_second)
        return false;
    else
        return true;
}

