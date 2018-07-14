#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_ITERATIVE_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_ITERATIVE_H_

#include "stack.h"

template <typename T>
class TowerOfHanoi {
public:
    TowerOfHanoi();
    TowerOfHanoi(std::size_t n);
    ~TowerOfHanoi();

    void execute();

private:
    std::size_t m_size;
    std::vector<Stack<T>> m_pillers;

    TowerOfHanoi(const TowerOfHanoi& rhs) {}
    TowerOfHanoi& operator = (const TowerOfHanoi& rhs) {}

    bool m_move(std::size_t from, std::size_t to);
    void m_print() const;
};

template <typename T>
TowerOfHanoi<T>::TowerOfHanoi() : m_size(0) {}

template <typename T>
TowerOfHanoi<T>::TowerOfHanoi(std::size_t n) : m_size(n) {
    for (int i = 0; i < 3; ++i)
        m_pillers.push_back(Stack<T>());
    for (std::size_t i = n; i > 0; --i)
        m_pillers[0].push(i);
}

template <typename T>
TowerOfHanoi<T>::~TowerOfHanoi() {}

template <typename T>
void TowerOfHanoi<T>::execute() {
    m_print();

    while (1) {
        if (m_pillers[0].size() % 2) {
            if (m_move(0, 2)) break;
            if (m_move(0, 1)) break;
            if (m_move(1, 2)) break;
        } else {
            if (m_move(0, 1)) break;
            if (m_move(0, 2)) break;
            if (m_move(1, 2)) break;
        }
    }
}

template <typename T>
bool TowerOfHanoi<T>::m_move(std::size_t from, std::size_t to) {
    if (!m_pillers[from].size() && !m_pillers[to].size())
        return true;

    if (m_pillers[from].size() && m_pillers[to].size()) {
        if (m_pillers[from].top() < m_pillers[to].top()) {
            m_pillers[to].push(m_pillers[from].top());
            m_pillers[from].pop();
        } else {
            m_pillers[from].push(m_pillers[to].top());
            m_pillers[to].pop();
        }
    } else if (m_pillers[from].size()) {
        m_pillers[to].push(m_pillers[from].top());
        m_pillers[from].pop();
    } else {
        m_pillers[from].push(m_pillers[to].top());
        m_pillers[to].pop();
    }

    m_print();

    if (m_pillers[2].size() == m_size && m_pillers[2].top() == 1)
        return true;
    else
        return false;
}

template <typename T>
void TowerOfHanoi<T>::m_print() const {
    std::cout << "-----------------------------------" <<std::endl;
    for (std::size_t i = 0; i < m_pillers.size(); ++i) {
        std::cout << i + 1 << " Piller -- ";
        m_pillers[i].print();
    }
    std::cout << "-----------------------------------" <<std::endl;
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_ITERATIVE_H_
