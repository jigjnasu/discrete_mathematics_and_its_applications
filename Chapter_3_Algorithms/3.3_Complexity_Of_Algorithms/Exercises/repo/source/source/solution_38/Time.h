#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_TIME_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_TIME_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 38
  This is the container of time.
  Time will come into like hh:mm:ss

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 24th, 2017
 */

#include <string>

namespace discrete_mathematics {
    namespace chapter_3 {
        namespace solution_38 {
            class Time {
            public:
                Time();
                Time(const std::string& time);
                ~Time();

                void print() const;

                bool operator < (const Time& rhs) const;
                bool operator > (const Time& rhs) const;
                bool operator <= (const Time& rhs) const;
                bool operator >= (const Time& rhs) const;

                bool operator == (const Time& rhs) const;
                bool operator != (const Time& rhs) const;

            private:
                int m_hour;
                int m_minute;
                int m_second;
            };
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_TIME_H_
