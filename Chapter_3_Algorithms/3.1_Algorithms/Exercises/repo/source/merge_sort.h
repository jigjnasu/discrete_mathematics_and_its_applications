/*
  This class contains some of the common functionality used in all the exercises here.
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 19th, Jan 2017
*/

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_MERGE_SORT_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_MERGE_SORT_H_

#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
                template <typename T>
                    class MergeSort {
                public:
                    MergeSort();
                    ~MergeSort();

                    void sort(std::vector<T>& V) const;

                private:
                    void m_sort(std::vector<T>& V, int min, int max) const;
                    void m_merge(std::vector<T>& V, int min, int mid, int max) const;
                };
    };
};

namespace dc = discrete_mathematics::chapter_3;

template <typename T>
dc::MergeSort<T>::MergeSort() {}

template <typename T>
dc::MergeSort<T>::~MergeSort() {}

template <typename T>
void dc::MergeSort<T>::sort(std::vector<T>& V) const {
    m_sort(V, 0, V.size() - 1);
}

template <typename T>
void dc::MergeSort<T>::m_sort(std::vector<T>& V, int min, int max) const {
    if (min < max) {
        const int mid = (min + max) >> 1;
        m_sort(V, min, mid);
        m_sort(V, mid + 1, max);
        m_merge(V, min, mid, max);
    }
}

template <typename T>
void dc::MergeSort<T>::m_merge(std::vector<T>& V, int min, int mid, int max) const {
    std::vector<T> left;
    std::vector<T> right;

    for (int i = min; i <= mid; ++i)
        left.push_back(V[i]);
    for (int i = mid + 1; i <= max; ++i)
        right.push_back(V[i]);

    int left_iter  = 0;
    int right_iter = 0;
    int iter       = min;

    while (left_iter < left.size() && right_iter < right.size()) {
        if (left[left_iter] < right[right_iter])
            V[iter++] = left[left_iter++];
        else
            V[iter++] = right[right_iter++];
    }

    // Copy left over from left
    while (left_iter < left.size())
        V[iter++] = left[left_iter++];

    // Copy left over from right
    while (right_iter < right.size())
        V[iter++] = right[right_iter++];
}

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_MERGE_SORT_H_
