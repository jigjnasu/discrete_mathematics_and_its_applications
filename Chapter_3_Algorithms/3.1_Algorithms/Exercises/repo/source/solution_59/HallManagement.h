/*
  This class have hall numbers, and its occupancies
  Author: Rakesh Kumar (cpp.rakesh(at)gmail.com)
  Date: 27th, Jan 2017
*/

#ifndef DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_HALL_H_
#define DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_HALL_H_

#include <string>

namespace discrete_mathematics{
    namespace chaper_3 {
        class HallManagement {
        public:
            HallManagement();
            HallManagement(int total_halls);
            ~HallManagement();

            int occupy();

        private:
            std::string m_halls_list;
        }
    };
};

#endif // DISCRETE_MATHEMATICS_AND_ITS_APPLICATIONS_CHAPTER_3_3_1_EXERCISES_REPO_SOLUTION_59_HALL_H_
