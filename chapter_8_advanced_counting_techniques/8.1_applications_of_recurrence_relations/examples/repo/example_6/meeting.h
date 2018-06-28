/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.1 Example 6
  Meeting Scheduler
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_1_MEETING_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_1_MEETING_H_

class Meeting {
public:
    Meeting();
    Meeting(int start, int end, int audience);
    Meeting(const Meeting& rhs);

    ~Meeting();

    Meeting& operator = (const Meeting& rhs);

    bool operator < (const Meeting& rhs) const;
    bool operator > (const Meeting& rhs) const;

    int start_time() const;
    int end_time() const;
    int audience() const;
    void print() const;

private:
    int m_start_time;
    int m_end_time;
    int m_audience;
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_1_MEETING_H_
