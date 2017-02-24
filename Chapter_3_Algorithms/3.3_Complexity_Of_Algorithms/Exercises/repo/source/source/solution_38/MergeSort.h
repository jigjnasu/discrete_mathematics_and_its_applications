#ifndef DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_MERGE_SORT_H_
#define DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_MERGE_SORT_H_

/*
  Chapter 3: Complexity Of Algorithms
  Discrete Mathematics and it's applications
  Kenneth H. Rosen

  Solution for exercise 38
  Implementation of merge sort, as its time complextity is O(n lg n).

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 24th, 2017
 */

#include "Meeting.h"
#include <vector>

namespace discrete_mathematics {
    namespace chapter_3 {
        namespace solution_38 {
            class MergeSort {
            public:
                MergeSort();
                ~MergeSort();

                void sort(std::vector<Meeting>& meeting_list);

            private:
                void m_sort(std::vector<Meeting>& meeting_list, int start, int end);
                void m_merge(std::vector<Meeting>& meeting_list, int start, int mid, int end);
            };
        };
    };
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_3_COMPLEXITY_OF_ALGORITHMS_SOLUTION_38_MERGE_SORT_H_
