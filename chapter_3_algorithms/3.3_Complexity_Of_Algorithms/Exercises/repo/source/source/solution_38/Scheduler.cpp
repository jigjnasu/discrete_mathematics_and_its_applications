#include "Scheduler.h"
#include "MergeSort.h"

namespace ds = discrete_mathematics::chapter_3::solution_38;

ds::Scheduler::Scheduler() {}

ds::Scheduler::~Scheduler() {}

void ds::Scheduler::schedule(std::vector<ds::Meeting>& meeting_list) {
    printf("---------------------------------------------------------------------\n");    
    printf("Scheduling the intial meeting list\n");
    printf("---------------------------------------------------------------------\n");
    print(meeting_list);
    printf("---------------------------------------------------------------------\n");

    ds::MergeSort sort;
    sort.sort(meeting_list);

    printf("---------------------------------------------------------------------\n");    
    printf("Sorted meeting list on start time\n");
    printf("---------------------------------------------------------------------\n");
    print(meeting_list);
    printf("---------------------------------------------------------------------\n");

    
    printf("---------------------------------------------------------------------\n");    
    printf("Scheduled meeting list\n");
    printf("---------------------------------------------------------------------\n");
    m_schedule(meeting_list);
    print(m_meetings);
    printf("---------------------------------------------------------------------\n");
}

void ds::Scheduler::print() const {
    for (std::size_t i = 0; i < m_meetings.size(); ++i) {
        printf("Meeting [%3lu] ||", i + 1);
        m_meetings[i].print();
        printf("\n");
    }    
}

void ds::Scheduler::print(const std::vector<ds::Meeting>& meeting_list) const {
    for (std::size_t i = 0; i < meeting_list.size(); ++i) {
        printf("Meeting [%3lu] ||", i + 1);
        meeting_list[i].print();
        printf("\n");
    }
}

int ds::Scheduler::add(const Meeting& meeting) {
    if (meeting.end_time() <= m_meetings[0].start_time())
        return 1;
    
    for (std::size_t i = 0; i < m_meetings.size() - 1; ++i) {
        if (meeting.start_time() >= m_meetings[i].end_time() &&
            meeting.end_time() <= m_meetings[i + 1].start_time())
            m_meetings.insert(m_meetings.begin() + i + 1, meeting);
            return i + 2;
    }

    return 0;
}

void ds::Scheduler::m_schedule(const std::vector<ds::Meeting>& meeting_list) {
    m_meetings.push_back(meeting_list[0]);
    for (std::size_t i = 1; i < meeting_list.size(); ++i)
        if (m_can_schedule(meeting_list[i]))
            m_meetings.push_back(meeting_list[i]);
}

bool ds::Scheduler::m_can_schedule(const ds::Meeting& meeting) const {
    for (std::size_t i = 0; i < m_meetings.size(); ++i) {
        if (meeting.start_time() > m_meetings[i].start_time() && meeting.start_time() < m_meetings[i].end_time() ||
            meeting.end_time() > m_meetings[i].start_time() && meeting.end_time() < m_meetings[i].end_time())
            return false;
    }
    return true;
}
