#ifndef DISCRETE_MATHEMATICS_CHAPTER_8_8_1_STACK_H_
#define DISCRETE_MATHEMATICS_CHAPTER_8_8_1_STACK_H_

#include <iostream>
#include <vector>

template <typename T>
class Stack {
public:
    Stack();
    Stack(const Stack& rhs);
    ~Stack();

    Stack& operator = (const Stack& rhs);

    void push(const T data);
    void pop();
    T top() const;

    std::size_t size() const;
    void print() const;

private:
    std::vector<T> m_stack;
};

template <typename T>
Stack<T>::Stack() {}

template <typename T>
Stack<T>::Stack(const Stack& rhs) {
    m_stack = rhs.m_stack;
}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
Stack<T>& Stack<T>::operator = (const Stack& rhs) {
    m_stack = rhs.m_stack;
    return *this;
}

template <typename T>
void Stack<T>::push(const T data) {
    m_stack.push_back(data);
}

template <typename T>
void Stack<T>::pop() {
    m_stack.erase(m_stack.end() - 1);
}

template <typename T>
T Stack<T>::top() const {
    return m_stack[m_stack.size() - 1];
}

template <typename T>
std::size_t Stack<T>::size() const {
    return m_stack.size();
}

template <typename T>
void Stack<T>::print() const {
    for (std::size_t i = 0; i < m_stack.size(); ++i)
        std::cout << m_stack[i] << " ";
    std::cout << std::endl;
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_8_8_1_STACK_H_
