#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_57_MEETING_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_57_MEETING_H_

/*
  This is the container for a meeting which has start time and end time.
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27th, Jan 2017
 */

#include "Time.h"

namespace discrete_mathematics {
    namespace chapter_3 {
        class Meeting {
        public:
            Meeting();
            Meeting(const Time& start_time, const Time& end_time);            
            ~Meeting();

            Meeting(const Meeting& rhs);

            Meeting operator = (const Meeting& rhs);
            bool operator < (const Meeting& rhs) const;
            bool operator > (const Meeting& rhs) const;
            bool operator <= (const Meeting& rhs) const;
            bool operator >= (const Meeting& rhs) const;
            bool operator == (const Meeting& rhs) const;
            bool operator != (const Meeting& rhs) const;

            Time start_time() const;
            Time end_time() const;
            
            void print() const;

        private:
            Time m_start_time;
            Time m_end_time;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_57_MEETING_H_
