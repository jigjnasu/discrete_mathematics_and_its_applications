#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_SCHEDULER_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_SCHEDULER_H_

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

#include "Meeting.h"
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        namespace solution_38 {
            class Scheduler {
            public:
                Scheduler();
                ~Scheduler();

                void schedule(std::vector<Meeting>& meeting_list);
                int add(const Meeting& meeting);

                void print() const;
                void print(const std::vector<Meeting>& meeting_list) const;

            private:
                std::vector<Meeting> m_meetings;

                void m_schedule(const std::vector<Meeting>& meeting_list);
                bool m_can_schedule(const Meeting& meeting) const;
            };
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_SCHEDULER_H_
