#ifndef DISCRETE_MATHEMATICS_CHAPTER_5_QUICK_SORT_H_
#define DISCRETE_MATHEMATICS_CHAPTER_5_QUICK_SORT_H_

#include <vector>
#include <cstdlib>
#include <random>

namespace discrete_mathematics {
    template <typename T>
    class QuickSort {
    public:
        QuickSort();
        ~QuickSort();

        void Sort(std::vector<T>& data, int start, int end);

    private:
        int m_partition(std::vector<T>& data, int start, int end);
        int m_random(int min, int max) const;
        void m_swap(T& a, T& b) const;
    };
};

template <typename T>
discrete_mathematics::QuickSort<T>::QuickSort() {}

template <typename T>
discrete_mathematics::QuickSort<T>::~QuickSort() {}

template <typename T>
void discrete_mathematics::QuickSort<T>::Sort(std::vector<T>& data, int start, int end) {
    if (start < end) {
        const int mid = m_partition(data, start, end);
        Sort(data, start, mid - 1);
        Sort(data, mid + 1, end);
    }
}

template <typename T>
int discrete_mathematics::QuickSort<T>::m_partition(std::vector<T>& data, int start, int end) {
    m_swap(data[end], data[m_random(start, end)]);
    int i = start;

    for (int j = i; j < end; ++j) {
        if (data[j] <= data[end]) {
            m_swap(data[i], data[j]);
            ++i;
        }
    }

    m_swap(data[end], data[i]);
    return i;
}

template <typename T>
int discrete_mathematics::QuickSort<T>::m_random(int min, int max) const {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

template <typename T>
void discrete_mathematics::QuickSort<T>::m_swap(T& a, T& b) const {
    const T t = a;
    a = b;
    b = t;
}

#endif //DISCRETE_MATHEMATICS_CHAPTER_5_QUICK_SORT_H_
