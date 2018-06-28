#include "merge_sort.h"

namespace ds = discrete_mathematics::chapter_3::solution_38;

ds::MergeSort::MergeSort() {}

ds::MergeSort::~MergeSort() {}

void ds::MergeSort::sort(std::vector<ds::Meeting>& meeting_list) {
    m_sort(meeting_list, 0, meeting_list.size() - 1);
}

void ds::MergeSort::m_sort(std::vector<ds::Meeting>& meeting_list, int start, int end) {
    if (start < end) {
        const int mid = (start + end) >> 1;
        m_sort(meeting_list, start, mid);
        m_sort(meeting_list, mid + 1, end);
        m_merge(meeting_list, start, mid, end);
    }
}

void ds::MergeSort::m_merge(std::vector<ds::Meeting>& meeting_list, int start, int mid, int end) {
    std::vector<ds::Meeting> left;
    std::vector<ds::Meeting> right;

    for (int i = start; i <= mid; ++i)
        left.push_back(meeting_list[i]);
    for (int i = mid + 1; i <= end; ++i)
        right.push_back(meeting_list[i]);

    int left_iter = 0;
    int right_iter = 0;
    int iter = start;

    while (left_iter < left.size() && right_iter < right.size()) {
        if (left[left_iter].start_time() < right[right_iter].start_time())
            meeting_list[iter++] = left[left_iter++];
        else
            meeting_list[iter++] = right[right_iter++];
    }

    // Left leftover
    while (left_iter < left.size())
        meeting_list[iter++] = left[left_iter++];
    // Right leftover
    while (right_iter < right.size())
        meeting_list[iter++] = right[right_iter++];       
}
