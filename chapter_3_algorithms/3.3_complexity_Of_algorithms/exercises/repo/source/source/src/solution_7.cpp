#include "solution_7.h"
#include "linear_search.h"
#include "binary_search.h"
#include <cstdio>
#include <ctime>

/*
  --------- Linear Search --------------
  Time Complexity for linear search is O(n).
  However here, as we need to find out in first 4 elements.
  Worst case always be a constant here O(4) = O(1).
  If it is not in the first, then second then ... fourth.

  --------- Binary Search --------------
  Time Complexity for binary search is O(lg n).
  But as the n = 32, it will first come to 16 --> 8 --> 4 --> 2.
  And then depending on the key to search it will search it will
  have more comparisions than the linear search of max 4.
  Therefore, in this special case where key is always in
  first 4 elements, linear search is always a better option
  than the binary search

  --------- Summary -------------------
  For first 4 elements search out of 32, linear search is always better than the
  binary search.
*/

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_7::Solution_7() {}

dc::Solution_7::~Solution_7() {}

void dc::Solution_7::compare() const {
    utility::algorithms::search::LinearSearch<int> linear_search;
    utility::algorithms::search::BinarySearch<int> binary_search;

    std::vector<int> data;
    for (int i = 1; i <= 32; ++i)
        data.push_back(i);
    m_print(data);

    const int k = 4;

    std::clock_t start = std::clock();
    if (linear_search.search(data, k))
        printf("Linear Search found element [%d] in the data vector\n", k);
    printf("Linear search Execution time == [%.8f]\n",
           (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("------------------------------------------------------------------\n");
    if (binary_search.search(data, k))
        printf("Binary Search found element [%d] in the data vector\n", k);
    printf("Binary search Execution time == [%.8f]\n",
           (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
}

void dc::Solution_7::m_print(const std::vector<int>& data) const {
    printf("------------------------------------------------------------------\n");
    for (std::size_t i = 0; i < data.size(); ++i)
        printf("%d ", data[i]);
    printf("\n------------------------------------------------------------------\n");
}
