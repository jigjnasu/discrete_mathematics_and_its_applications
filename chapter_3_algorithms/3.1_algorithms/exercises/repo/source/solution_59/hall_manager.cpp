#include "hall_manager.h"
#include "meeting.h"

namespace dc = discrete_mathematics::chapter_3;

dc::HallManager::HallManager() {}

dc::HallManager::~HallManager() {}

dc::HallManager::HallManager(int max) {
    for (int i = 0; i < max; ++i)
        m_halls_meetings.push_back(dc::Meeting());
}

int dc::HallManager::book_hall(const Meeting& meeting) {
    for (std::size_t i = 0; i < m_halls_meetings.size(); ++i) {
        if (meeting.start_time() >= m_halls_meetings[i].end_time()) {
            m_halls_meetings[i] = meeting;
            return i + 1;
        }
    }

    return 0;
}
