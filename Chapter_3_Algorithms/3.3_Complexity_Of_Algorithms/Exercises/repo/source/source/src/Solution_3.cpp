#include "Solution_3.h"
#include "Maths.h"

namespace dc = discrete_mathematics::chapter_3;

dc::Solution_3::Solution_3() {}

dc::Solution_3::~Solution_3() {}

int dc::Solution_3::max_product(const std::vector<int>& A) const {
    utility::maths::Maths<int> maths;
    int max = 0;
    for (std::size_t i = 0; i < A.size(); ++i)
        for (std::size_t j = 0; j < A.size(); ++j)
            max = maths.max(A[i] * A[j], max);
    return max;
}
