#include "Solution_46.h"

namespace ds = discrete_mathematics::chapter_3;

ds::Solution_46::Solution_46() {}

ds::Solution_46::~Solution_46() {}

int ds::Solution_46::pos(const std::string& str, const std::string& target) const {
    for (std::size_t i = 0; i < str.size() - target.size(); ++i) {
        if (str[i] == target[0])
            if (m_is_match(str, target, i))
                return i + 1;
    }

    return 0;
}

bool ds::Solution_46::m_is_match(const std::string& str, const std::string& target,
                                 std::size_t pos) const {
    for (std::size_t i = 1; i < target.size(); ++i)
        if (str[pos + i] != target[i])
            return false;
    
    return true;
}
