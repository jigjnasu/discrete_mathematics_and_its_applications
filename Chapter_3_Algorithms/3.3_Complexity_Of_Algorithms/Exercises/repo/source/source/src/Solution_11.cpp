#include "Solution_11.h"

/*
  The complexity of this algorithm is O(n ^ 3).
  first loop from subset s1 -- sn.
  second loop from subset si + 1, sn
  third loop from subset si to sj
 */

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_11::Solution_11() {}

dc::Solution_11::~Solution_11() {}

int dc::Solution_11::disjoint_pairs(const std::vector< std::vector<int> >& set) const {
    int counter = 0;
    for (std::size_t i = 0; i < set.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < set.size(); ++j) {
            if (are_disjoint(set[i], set[j]))
                ++counter;
        }
    }

    return counter;
}

bool dc::Solution_11::are_disjoint(const std::vector<int>& s1,
                                   const std::vector<int>& s2) const {
    for (std::size_t i = 0; i < s1.size(); ++i)
        for (std::size_t j = 0; j < s2.size(); ++j)
            if (s1[i] == s2[j])
                return false;
    return true;
}
