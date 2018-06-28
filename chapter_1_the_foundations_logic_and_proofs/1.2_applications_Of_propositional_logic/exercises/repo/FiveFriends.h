#ifndef DISCRETE_MATHEMATICS_CHAPTER_1_1_2_FIVE_FRIENDS_H_
#define DISCRETE_MATHEMATICS_CHAPTER_1_1_2_FIVE_FRIENDS_H_

/*
  Discrete mathematics by Dr. Kenneth H. Rosen.
  Chapter 1, 1.2 The applications of propositional logic.
  Exercise 34, solution in C++.
  Author : Rakesh Kumar, cpp.rakesh@gmail.com
  Date: September 25th, 2016.
 */

class WhoIsChatting {
public:
    WhoIsChatting();
    ~WhoIsChatting();

    void Compute() const;
    
private:
    bool m_can_compute(bool K, bool H, bool R, bool V, bool A) const;
    bool m_get_random() const;
    void m_print_chatters(bool K, bool H, bool R, bool V, bool A) const;
};

#endif // DISCRETE_MATHEMATICS_CHAPTER_1_1_2_FIVE_FRIENDS_H_
