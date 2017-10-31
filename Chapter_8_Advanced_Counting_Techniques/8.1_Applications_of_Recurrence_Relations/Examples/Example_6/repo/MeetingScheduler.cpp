#include "Meeting.h"
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <algorithm>

const int START_LIMIT = 600;
const int END_LIMIT = 1800;

int random(int min, int max) {
    return min + rand() % (max - min + 1);
}

int min(int x, int y) {
    return x < y ? x : y;
}

int max(int x, int y) {
    return x > y ? x : y;
}

Meeting max_audience(const Meeting& m1, const Meeting& m2) {
    return m1.audience() > m2.audience() ? m1 : m2;
}

void print(const std::vector<Meeting>& meets) {
    printf("--------------------------------------------------\n");
    for (std::size_t i = 0; i < meets.size(); ++i)
        meets[i].print();
    printf("--------------------------------------------------\n");
}

std::vector<Meeting> meetings() {
    std::vector<Meeting> meets;
    for (int i = 0; i < 20; ++i) {
        int s = random(START_LIMIT, END_LIMIT);
        int e = random(START_LIMIT, END_LIMIT);
        Meeting m = Meeting(min(s, e), max(s, e), random(1, 100));
        meets.push_back(m);
    }

    return meets;
}

std::vector<Meeting> max_audience_schedule(const std::vector<Meeting>& meets, int& max) {
    std::vector<Meeting> schedule;
    Meeting m = meets[0];
    for (std::size_t i = 1; i < meets.size(); ++i) {
        if (m.end_time() >= meets[i].start_time() &&
            m.end_time() <= meets[i].end_time()) {
            m = max_audience(m, meets[i]);
        } else {
            schedule.push_back(m);
            max += m.audience();
            m = meets[i];
        }
    }

    return schedule;
}

void max_audience_dp(const std::vector<Meeting>& meets,
                     const Meeting& m,
                     std::size_t index, int& max) {
    if (index >= meets.size()) {
        return;
    } else {
        if (m.end_time() >= meets[index].start_time() &&
            m.end_time() <= meets[index].end_time()) {
            const Meeting t = max_audience(m, meets[index]);
            max_audience_dp(meets, t, ++index, max);
        } else {
            max += m.audience();
            max_audience_dp(meets, meets[index], index + 1, max);
        }
    }
}

void test_meeting_scheduler() {
    std::vector<Meeting> meets = meetings();
    print(meets);

    // Sort the meetings by end time
    std::sort(meets.begin(), meets.end());

    print(meets);

    int max = 0;
    const std::vector<Meeting> best_schedule = max_audience_schedule(meets, max);

    int max_dp = 0;
    max_audience_dp(meets, meets[0], 1, max_dp);
    printf("-------------------------------------------------------------\n");
    printf("--------------------- Best Schedule -------------------------\n");
    printf("-------------------------------------------------------------\n");
    print(best_schedule);
    printf("Total Audience == [%d]\n", max);
    printf("-------------------------------------------------------------\n");
    printf("--------------------- Best Schedule(DP) ---------------------\n");
    printf("-------------------------------------------------------------\n");
    printf("Total Audience == [%d]\n", max_dp);
}

int main() {
    test_meeting_scheduler();

    return 0;
}
