#include "Meeting.h"
#include <cstdio>

namespace ds = discrete_mathematics::chapter_3::solution_38;

ds::Meeting::Meeting() {}

ds::Meeting::Meeting(const std::string& start_time,
                     const std::string& end_time) :
    m_start_time(start_time), m_end_time(end_time) {}

ds::Meeting::~Meeting() {}

void ds::Meeting::print() const {
    printf(" Start time == [");
    m_start_time.print();
    printf("] || End time == [");
    m_end_time.print();
    printf("]");
}

ds::Time ds::Meeting::start_time() const {
    return m_start_time;
}

ds::Time ds::Meeting::end_time() const {
    return m_end_time;
}
