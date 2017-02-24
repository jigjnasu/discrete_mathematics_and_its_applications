#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_MEETING_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_MEETING_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 38
  This is the container of Meeting.
  It will have meeting start and end time

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 24th, 2017
 */

#include "Time.h"

namespace discrete_mathematics {
    namespace chapter_3 {
        namespace solution_38 {
            class Meeting {
            public:
                Meeting();
                Meeting(const std::string& start_time,
                        const std::string& end_time);
                ~Meeting();

                void print() const;

                Time start_time() const;
                Time end_time() const;

            private:
                Time m_start_time;
                Time m_end_time;
            };
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_MEETING_H_
