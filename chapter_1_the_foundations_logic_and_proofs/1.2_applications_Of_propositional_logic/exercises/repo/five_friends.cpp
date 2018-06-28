#include "FiveFriends.h"
#include <cstdio>
#include <cstdlib>

/*
  Discrete mathematics by Dr. Kenneth H. Rosen.
  Chapter 1, 1.2 The applications of propositional logic.
  Exercise 34, solution in C++.
  Author : Rakesh Kumar, cpp.rakesh@gmail.com
  Date: September 25th, 2016.
 */


WhoIsChatting::WhoIsChatting() {}

WhoIsChatting::~WhoIsChatting() {}

void WhoIsChatting::Compute() const {
    while (1) {
        const bool K = m_get_random();
        const bool H = m_get_random();
        const bool R = m_get_random();
        const bool V = m_get_random();
        const bool A = m_get_random();
        
        if (m_can_compute(K, H, R, V, A))
            break;
    }
}

bool WhoIsChatting::m_can_compute(bool K, bool H, bool R, bool V, bool A) const {
    printf("--------------------------------\n");
    m_print_chatters(K, H, R, V, A);
    printf("--------------------------------\n");

    if (K || H) {
        if ((R || V) && (R ^ V)) {
            if ((A && R) || (!A && !R)) {
                if ((V && K) || (!V && !K)) {
                    if ((H && (A && K)) || (!H && !(A && K))) {
                       m_print_chatters(K, H, R, V, A);
                       return true;
                    }
                }
            }
        }
    }

    return false;
}

bool WhoIsChatting::m_get_random() const {
    const int MIN = 1;
    const int MAX = 10;
    return ((MIN + rand() % (MAX - MIN) + 1) % 2 == 0) ? 0 : 1;
}

void WhoIsChatting::m_print_chatters(bool K, bool H, bool R, bool V, bool A) const {
    if (K)
        printf("Kevin   is chatting\n");
    if (H)
        printf("Heather is chatting\n");
    if (R)
        printf("Randy   is chatting\n");
    if (V)
        printf("Vijay   is chatting\n");
    if (A)
        printf("Abbay   is chatting\n");
}
