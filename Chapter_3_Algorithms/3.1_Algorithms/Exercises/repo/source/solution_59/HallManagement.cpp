#include "HallManagement.h"

dc = discrete_mathematics::chapter_3;

dc::HallManagement::HallManagement() {}

dc::HallManagement::HallManagement(int total_halls) {
    for (int i = 0; i < total_halls; ++i)
        m_halls_list.push_back('f');
}

dc::HallManagement::~HallManagement() {}

int dc::HallManagement::occupy() {
    
}
