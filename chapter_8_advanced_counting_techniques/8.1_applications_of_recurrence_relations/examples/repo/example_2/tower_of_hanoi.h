#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_H_

#include "stack.h"

template <typename T>
class TowerOfHanoi {
public:
    TowerOfHanoi();
    TowerOfHanoi(int n);
    ~TowerOfHanoi();

    void execute();

private:
    int m_size;
    Stack<T> m_source;
    Stack<T> m_target;
    Stack<T> m_temp;

    void m_execute(int n, Stack<T>& source, Stack<T>& temp, Stack<T>& target);
    bool m_move(Stack<T>& source, Stack<T>& target);
    void m_print() const;
};

template <typename T>
TowerOfHanoi<T>::TowerOfHanoi() : m_size(0) {}

template <typename T>
TowerOfHanoi<T>::TowerOfHanoi(int n) : m_size(n) {
    for (int i = n; i > 0; --i)
        m_source.push(i);
}

template <typename T>
TowerOfHanoi<T>::~TowerOfHanoi() {}

template <typename T>
void TowerOfHanoi<T>::execute() {
    m_print();
    m_execute(m_size, m_source, m_temp, m_target);
}

template <typename T>
void TowerOfHanoi<T>::m_execute(int n, Stack<T>& source, Stack<T>& temp, Stack<T>& target) {
    if (n >= 0) {
        m_execute(n - 1, source, target, temp);
        if (m_move(target, source)) return;

        m_print();

        m_execute(n - 1, temp, source, target);
    }
}

template <typename T>
bool TowerOfHanoi<T>::m_move(Stack<T>& source, Stack<T>& target) {
    if (!source.size() && !target.size())
        return true;

    if (source.size() && target.size()) {
        if (source.top() < target.top()) {
            target.push(source.top());
            source.pop();
        } else {
            source.push(target.top());
            target.pop();
        }
    } else if(source.size()) {
        target.push(source.top());
        source.pop();
    } else {
        source.push(target.top());
        target.pop();
    }

    if (m_target.size() == m_size && m_target.top() == 1)
        return true;
    else
        return false;
}

template <typename T>
void TowerOfHanoi<T>::m_print() const {
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Source -- "; m_source.print();
    std::cout << "Temp   -- "; m_temp.print();
    std::cout << "Target -- "; m_target.print();
    std::cout << "-------------------------------------" << std::endl;
}
#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_1_TOWER_OF_HANOI_H_
