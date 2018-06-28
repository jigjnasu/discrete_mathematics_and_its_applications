#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_ALGORITHMS_ALGORITHM_7_MEETING_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_ALGORITHMS_ALGORITHM_7_MEETING_H_

/*
  This is the container for a meeting which has start time and end time.
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26th, Jan 2017
 */

namespace discrete_mathematics {
    namespace chapter_3 {
        class Meeting {
        public:
            Meeting();
            ~Meeting();
            Meeting(int start, int end);
            Meeting(const Meeting& rhs);

            Meeting operator = (const Meeting& rhs);
            bool operator < (const Meeting& rhs) const;
            bool operator > (const Meeting& rhs) const;
            bool operator <= (const Meeting& rhs) const;
            bool operator >= (const Meeting& rhs) const;
            bool operator == (const Meeting& rhs) const;
            bool operator != (const Meeting& rhs) const;

            int start_time() const;
            int end_time() const;
            void print() const;

        private:
            int m_start_time;
            int m_end_time;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_ALGORITHMS_ALGORITHM_7_MEETING_H_
