/*
  Implementation of Algorithm 7, (Scheduling meeting)
  Chapter 3.1 (Algorithms)
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Jan 26th, 2017
 */

#include "Meeting.h"
#include "merge_sort.h"
#include <vector>
#include <cstdio>

namespace dc = discrete_mathematics::chapter_3;

void print_meetings(const std::vector<dc::Meeting>& list) {
    printf("---------------------------------------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i) {
        printf("Meeting [%lu] start from ", i + 1);
        list[i].print();
    }
    printf("---------------------------------------------------------------\n");    
}

std::vector<dc::Meeting> list_of_all_meetings() {
    std::vector<dc::Meeting> list;
    list.push_back(dc::Meeting(8, 12));
    list.push_back(dc::Meeting(8, 15));
    list.push_back(dc::Meeting(9, 10));
    list.push_back(dc::Meeting(11, 12));
    list.push_back(dc::Meeting(13, 15));

    return list;
}

bool can_schedule(const dc::Meeting& meeting,
                  const std::vector<dc::Meeting>& list) {
    if (!list.size())
        return true;

    for (std::size_t i = 0; i < list.size(); ++i) {
        if ((meeting.start_time() >= list[i].start_time() &&
             meeting.start_time() <= list[i].end_time()) ||
            (meeting.end_time() >= list[i].start_time() &&
             meeting.end_time() <= list[i].end_time()))
            return false;
    }
    
    return true;
}

std::vector<dc::Meeting> schedule_meetings(std::vector<dc::Meeting>& list) {
    dc::MergeSort<dc::Meeting> sort;
    print_meetings(list);
    sort.sort(list);
    print_meetings(list);

    std::vector<dc::Meeting> meetings;
    for (std::size_t i = 0; i < list.size(); ++i) {
        if (can_schedule(list[i], meetings))
            meetings.push_back(list[i]);
    }

    return meetings;
}

void test_scheduler() {
    std::vector<dc::Meeting> list = list_of_all_meetings();
    const std::vector<dc::Meeting> meetings = schedule_meetings(list);
    printf("-------- We can schedule these meetings --------------\n");
    print_meetings(meetings);
}

int main() {
    test_scheduler();

    return 0;
}
