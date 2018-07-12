#include "scheduler.h"

namespace ds = discrete_mathematics::chapter_3::solution_38;

std::vector<ds::Meeting> build_initial_meeting_list() {
    std::vector<ds::Meeting> meeting_list;
    meeting_list.push_back(ds::Meeting("10:27", "10:37"));
    meeting_list.push_back(ds::Meeting("9:30", "9:50"));
    meeting_list.push_back(ds::Meeting("8:20", "8:40"));
    meeting_list.push_back(ds::Meeting("9:10", "9:55"));
    meeting_list.push_back(ds::Meeting("10:10", "10:37"));
    meeting_list.push_back(ds::Meeting("11:10", "11:20"));
    meeting_list.push_back(ds::Meeting("11:27", "11:37"));
    meeting_list.push_back(ds::Meeting("9:05", "9:30"));
    meeting_list.push_back(ds::Meeting("8:27", "9:10"));
    meeting_list.push_back(ds::Meeting("6:37", "7:05"));
    meeting_list.push_back(ds::Meeting("12:37", "13:29"));

    return meeting_list;
}

void add(ds::Scheduler& scheduler, const ds::Meeting& meeting) {
    printf("---------------------------------------------------------------------\n");
    printf("Trying to add meeting ");
    meeting.print();
    printf(" into the current meeting list\n");

    if (int pos = scheduler.add(meeting)) {
        printf("Meeting ");
        meeting.print();
        printf(" sucessfuly added at [%d] location\n", pos);
        scheduler.print();
    } else {
        printf("There is not enough space for the meeting to be held\n");
    }
    printf("---------------------------------------------------------------------\n");
}

int main() {
    ds::Scheduler scheduler;
    std::vector<ds::Meeting> meeting_list = build_initial_meeting_list();
    scheduler.schedule(meeting_list);

    ds::Meeting a("8:30", "8:50");
    add(scheduler, a);
    ds::Meeting b("8:00", "8:20");
    add(scheduler, b);

    return 0;
}
