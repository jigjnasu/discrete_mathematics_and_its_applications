#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_ITERATIVE_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_ITERATIVE_H_

/*
  Disrete Mathematics and It's Applications
  by Dr. Rosen
  Chapter 8, Tower Of Hanoi Iterative Solution.
  Rakesh Kumar, cpp.rakesh@gmail.com
  01/11/2017
 */

#include <cstdio>
#include <vector>

// Move all the disks from A ---> C, we can use B piller to transfer the disks
template <std::size_t size>
class TowerOfHanoi {
public:
    TowerOfHanoi();
    TowerOfHanoi(std::size_t n);
    ~TowerOfHanoi();

    void Magic();

private:
    // Thsese are the three pillers
    std::vector<std::size_t> m_a;
    std::vector<std::size_t> m_b;
    std::vector<std::size_t> m_c;

    std::size_t m_size;

    void m_move();
    void m_print() const;
};

template <std::size_t size>
TowerOfHanoi<size>::TowerOfHanoi() : m_size(0) {}

template <std::size_t size>
TowerOfHanoi<size>::TowerOfHanoi(std::size_t n) : m_size(n) {
    for (std::size_t i = 0; i < n; ++i) {
        m_a.push_back(i + 1);
        m_b.push_back(i + 1);
        m_c.push_back(i + 1);
    }
}

template <std::size_t size>
TowerOfHanoi<size>::~TowerOfHanoi() {}

template <std::size_t size>
void TowerOfHanoi<size>::Magic() {
    while (m_c.size() ~= m_size) {
        // Odd one
        if (m_a.size() % 2) {
            // A --> C
            // A --> B
            // C --> B
        } else { // Even one
            // A --> B
            // A --> C
            // B --> C
        }
    }
}

template <std::size_t size>
void TowerOfHanoi<size>::m_move() {
    
}

template <std::size_t size>
void TowerOfHanoi<size>::m_print() const {
    
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_ITERATIVE_H_
