#include "Meeting.h"
#include <cstdio>

Meeting::Meeting() : m_start_time(0), m_end_time(0), m_audience(0) {}

Meeting::Meeting(int start, int end, int audience) :
    m_start_time(start), m_end_time(end), m_audience(audience) {}

Meeting::Meeting(const Meeting& rhs) {
    m_start_time = rhs.m_start_time;
    m_end_time = rhs.m_end_time;
    m_audience = rhs.m_audience;
}

Meeting::~Meeting() {}

Meeting& Meeting::operator = (const Meeting& rhs) {
    m_start_time = rhs.m_start_time;
    m_end_time = rhs.m_end_time;
    m_audience = rhs.m_audience;

    return *this;
}

bool Meeting::operator < (const Meeting& rhs) const {
    return m_end_time < rhs.m_end_time;
}

bool Meeting::operator > (const Meeting& rhs) const {
    return m_end_time > rhs.m_end_time;
}

int Meeting::start_time() const {
    return m_start_time;
}

int Meeting::end_time() const {
    return m_end_time;
}

int Meeting::audience() const {
    return m_audience;
}

void Meeting::print() const {
    printf("Start Time == [%04d] || End Time == [%04d] || Audience == [%3d]\n",
           m_start_time, m_end_time, m_audience);
}
