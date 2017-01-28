#include "Time.h"
#include "Meeting.h"
#include "HallManager.h"
#include "merge_sort.h"
#include <vector>

namespace dc = discrete_mathematics::chapter_3;

std::vector<dc::Meeting> all_meetings() {
    std::vector<dc::Meeting> meetings;
    meetings.push_back(dc::Meeting(dc::Time("09:00"), dc::Time("09:45")));
    meetings.push_back(dc::Meeting(dc::Time("09:30"), dc::Time("10:00")));
    meetings.push_back(dc::Meeting(dc::Time("09:50"), dc::Time("10:15")));
    meetings.push_back(dc::Meeting(dc::Time("10:00"), dc::Time("10:30")));
    meetings.push_back(dc::Meeting(dc::Time("10:10"), dc::Time("10:25")));
    meetings.push_back(dc::Meeting(dc::Time("10:30"), dc::Time("10:55")));
    meetings.push_back(dc::Meeting(dc::Time("10:15"), dc::Time("10:45")));
    meetings.push_back(dc::Meeting(dc::Time("09:05"), dc::Time("09:55")));
    meetings.push_back(dc::Meeting(dc::Time("10:30"), dc::Time("11:00")));
    meetings.push_back(dc::Meeting(dc::Time("10:45"), dc::Time("11:30")));
    meetings.push_back(dc::Meeting(dc::Time("11:00"), dc::Time("11:15")));

    return meetings;
}

void print(const std::vector<dc::Meeting>& meetings) {
    for (std::size_t i = 0; i < meetings.size(); ++i)
        meetings[i].print();
}

void schedule_meetings() {
    
}

void test_meeting_scheduler() {
    dc::MergeSort<dc::Meeting> sort;
    
    std::vector<dc::Meeting> meetings = all_meetings();
    printf("---------------------- All Meetings Schedule ----------------\n");
    print(meetings);
    printf("-------------------------------------------------------------\n");    

    sort.sort(meetings);
    printf("---------------------- Sorted by Start Time -----------------\n");
    print(meetings);
    printf("-------------------------------------------------------------\n");

    dc::HallManager hall_manager(5);
    for (std::size_t i = 0; i < meetings.size(); ++i)
        meetings[i].book_hall(hall_manager.book_hall(meetings[i]));

    printf("--------------- Hall Manager scheduled meetings -------------\n");
    print(meetings);
    printf("-------------------------------------------------------------\n");    
}

int main() {
    test_meeting_scheduler();

    return 0;
}
