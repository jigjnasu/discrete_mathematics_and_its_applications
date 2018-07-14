/*
  This class have the hall booking related stuff
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 28th, Jan 2017
*/

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_HALL_MANAGER_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_HALL_MANAGER_H_

#include "meeting.h"
#include <string>
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        class HallManager {
        public:
            HallManager();
            HallManager(int max);
            ~HallManager();

            int book_hall(const Meeting& meeting);

        private:
            std::vector<Meeting> m_halls_meetings;
        };
    };
};

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_HALL_MANAGER_H_
