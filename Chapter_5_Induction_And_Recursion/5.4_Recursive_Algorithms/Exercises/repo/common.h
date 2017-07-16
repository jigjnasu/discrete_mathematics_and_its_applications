#ifndef DISCRETE_MATHEMATICS_CHAPTER_5_4_COMMON_H_
#define DISCRETE_MATHEMATICS_CHAPTER_5_4_COMMON_H_

#include <cstdlib>

namespace discrete_mathematics {
    template <typename T>
    class Common {
    public:
        Common();
        ~Common();

        T random(T min, T max) const;
        T min(T a, T b) const;
        T max(T a, T b) const;
        T power(T x, T n) const;
    };
};

template <typename T>
discrete_mathematics::Common<T>::Common() {}

template <typename T>
discrete_mathematics::Common<T>::~Common() {}

template <typename T>
T discrete_mathematics::Common<T>::random(T min, T max) const {
    return min + rand() % (max - min + 1);
}

template <typename T>
T discrete_mathematics::Common<T>::min(T a, T b) const {
    return a < b ? a : b;
}

template <typename T>
T discrete_mathematics::Common<T>::max(T a, T b) const {
    return a > b ? a : b;
}

template <typename T>
T discrete_mathematics::Common<T>::power(T x, T n) const {
    if (n == 0) {
        return 1;
    } else {
        const T t = power(x, n >> 1);
        if (n % 2)
            return t * t * x;
        else
            return t * t;
    }
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_5_4_COMMON_H_
