/*
  This class will have time in hours, minutes and seconds
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 27th, Jan 2017
*/

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_TIME_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_TIME_H_

#include <string>

namespace discrete_mathematics {
    namespace chapter_3 {
        class Time {
        public:
            Time();
            Time(const std::string& time);
            ~Time();

            Time(const Time& rhs);
            Time operator = (const Time& rhs);

            bool operator < (const Time& rhs) const;
            bool operator > (const Time& rhs) const;
            bool operator <= (const Time& rhs) const;
            bool operator >= (const Time& rhs) const;
            bool operator == (const Time& rhs) const;
            bool operator != (const Time& rhs) const;

            void print() const;

        private:
            int m_hours;
            int m_minutes;
            int m_seconds;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_TIME_H_
