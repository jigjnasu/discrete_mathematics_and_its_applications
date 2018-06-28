#include "Meeting.h"
#include "merge_sort.h"
#include <cstdio>
#include <vector>

namespace dc = discrete_mathematics::chapter_3;

void print(const std::vector<dc::Meeting>& list) {
    printf("--------------------------------------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i) {
        printf("Meeting [%4lu] sechedule ", i + 1);
        list[i].print();
    }
    printf("--------------------------------------------------------------\n");    
}

std::vector<dc::Meeting> all_meetings_list() {
    std::vector<dc::Meeting> list;
    list.push_back(dc::Meeting(dc::Time(9)      , dc::Time(9, 45)));
    list.push_back(dc::Meeting(dc::Time(9, 30)  , dc::Time(10)));
    list.push_back(dc::Meeting(dc::Time(9, 50)  , dc::Time(10, 15)));
    list.push_back(dc::Meeting(dc::Time(10)     , dc::Time(10, 30)));
    list.push_back(dc::Meeting(dc::Time(10, 10) , dc::Time(10, 25)));
    list.push_back(dc::Meeting(dc::Time(10, 30) , dc::Time(10, 55)));
    list.push_back(dc::Meeting(dc::Time(10, 15) , dc::Time(10, 45)));
    list.push_back(dc::Meeting(dc::Time(10, 30) , dc::Time(11)));
    list.push_back(dc::Meeting(dc::Time(10, 45) , dc::Time(11, 30)));
    list.push_back(dc::Meeting(dc::Time(10, 55) , dc::Time(11, 25)));
    list.push_back(dc::Meeting(dc::Time(11)     , dc::Time(11, 15)));     

    return list;
}

bool can_schedule(const dc::Meeting& meeting, const std::vector<dc::Meeting>& list) {
    if (!list.size())
        return true;

    for (std::size_t i = 0; i < list.size(); ++i) {
        if ((meeting.start_time() >= list[i].start_time()  &&
             meeting.start_time() <= list[i].end_time()) ||
            (meeting.end_time() >= list[i].start_time() &&
             meeting.end_time() <= list[i].end_time()))
            return false;
    }

    return true;
}

std::vector<dc::Meeting> schedule_meetings() {
    std::vector<dc::Meeting> list = all_meetings_list();
    print(list);

    dc::MergeSort<dc::Meeting> sort;
    printf("Sorted meetings on end time\n");
    sort.sort(list);
    print(list);

    std::vector<dc::Meeting> scheduled_meetings;
    for (std::size_t i = 0; i < list.size(); ++i)
        if (can_schedule(list[i], scheduled_meetings))
            scheduled_meetings.push_back(list[i]);

    printf("These meetings can be succesfully scheduled\n");
    return scheduled_meetings;
}

void test_schedule_meetings() {
    print(schedule_meetings());
}


int main() {
    test_schedule_meetings();

    return 0;
}
