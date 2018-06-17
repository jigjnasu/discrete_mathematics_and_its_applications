#include "solution_23_c.h"
#include "utility.h"
#include <cstdio>

discrete_mathematics::chapter_8::DivideAndConquer::DivideAndConquer() {}
discrete_mathematics::chapter_8::DivideAndConquer::~DivideAndConquer() {}

int discrete_mathematics::chapter_8::DivideAndConquer::Max(const std::vector<int>& list) {
    return m_max(list, 0, list.size() - 1);
}

int discrete_mathematics::chapter_8::DivideAndConquer::m_max(const std::vector<int>& list, int s, int e) {
    if (s == e) {
        return list[s];
    } else {
        discrete_mathematics::chapter_8::Utility<int> util;

        int max_sum = 0;
        int mid = (s + e) >> 1;

        const int left_sum  = m_max(list, s, mid);
        const int right_sum = m_max(list, mid + 1, e);
        const int cross_sum = m_cross(list, s, mid, e);

        return util.Max(max_sum, util.Max(cross_sum, util.Max(left_sum, right_sum)));
    }
}

int discrete_mathematics::chapter_8::DivideAndConquer::m_cross(const std::vector<int>& list, int s, int m, int e) {
    discrete_mathematics::chapter_8::Utility<int> util;

    int l_sum = list[m];
    int sum = l_sum;
    for (int i = m - 1; i >= s; --i) {
        sum += list[i];
        l_sum = util.Max(sum, l_sum);
    }

    int r_sum = list[m + 1];
    sum = r_sum;
    for (int i = m + 2; i <= e; ++i) {
        sum += list[i];
        r_sum = util.Max(sum, r_sum);
    }

    return l_sum + r_sum;
}
