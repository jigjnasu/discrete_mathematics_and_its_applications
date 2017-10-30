#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_1_MEETING_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_1_MEETING_H_

#include <time>
#include <vector>

namespace discrete_mathematics {
    class Meeting {
    public:
        Meeting();
        ~Meeting();

        void add()

    private:
        // Making Meeting a no copiyable
        Meeting(const Meeting& rhs) {}
        Meeting& operator = (const Meeting& rhs) {}
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_1_MEETING_H_
