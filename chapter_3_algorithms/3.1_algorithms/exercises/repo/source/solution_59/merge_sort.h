#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_MERGE_SORT_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_MERGE_SORT_H_

#include <vector>

template <typename T>
class MergeSort {
public:
    MergeSort();
    ~MergeSort();

    void sort(std::vector<T>& v);

private:
    void m_sort(std::vector<T>& v, int s, int e);
    void m_merge(std::vector<T>& v, int s, int m, int e);
};

template <typename T>
MergeSort<T>::MergeSort() {}

template <typename T>
MergeSort<T>::~MergeSort() {}

template <typename T>
void MergeSort<T>::sort(std::vector<T>& v) {
    m_sort(v, 0, v.size() - 1);
}

template <typename T>
void MergeSort<T>::m_sort(std::vector<T>& v, int s, int e) {
    if (s < e) {
        const int m = (s + e) >> 1;
        m_sort(v, s, m);
        m_sort(v, m + 1, e);
        m_merge(v, s, m, e);
    }
}

template <typename T>
void MergeSort<T>::m_merge(std::vector<T>& v, int s, int m, int e) {
    std::vector<T> l;
    for (int i = s; i <= m; ++i)
        l.push_back(v[i]);

    std::vector<T> r;
    for (int i = m + 1; i <= e; ++i)
        r.push_back(v[i]);

    std::size_t i   = 0;
    std::size_t l_i = 0;
    std::size_t r_i = 0;
    while (l_i < l.size() && r_i < r.size())
        if (l[l_i] < r[r_i])
            v[i++] = l[l_i++];
        else
            v[i++] = r[r_i++];

    while (l_i < l.size())
        v[i++] = l[l_i++];
    while (r_i < r.size())
        v[i++] = r[r_i++];
}

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_MERGE_SORT_H_
