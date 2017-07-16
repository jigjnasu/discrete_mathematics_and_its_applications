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

#endif // DISCRETE_MATHEMATICS_CHAPTER_5_4_COMMON_H_
