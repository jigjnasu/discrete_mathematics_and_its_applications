#ifndef DISCREATE_MATHEMATICS_CHAPTER_8_8_1_MATRIX_H_
#define DISCREATE_MATHEMATICS_CHAPTER_8_8_1_MATRIX_H_

/*
  Discrete Mathematics and It's Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.1 Example 1 (Fibonacci Numbers)
  Rakesh Kumar, cpp.rakesh@gmail.com
  01/11/2017
*/

#include <cstdio>

template <std::size_t size>
class Matrix {
public:
    Matrix();
    Matrix(const int (&m)[size][size]);
    Matrix(const Matrix& rhs);
    ~Matrix();

    Matrix& operator = (const Matrix& rhs);
    Matrix operator * (const Matrix& rhs);
    void operator *= (const Matrix& rhs);

    int get() const;

    void print() const;

private:
    int m_mat[size][size];
};

template <std::size_t size>
Matrix<size>::Matrix() {
    for (std::size_t r = 0; r < size; ++r)
        for (std::size_t c = 0; c < size; ++c)
            m_mat[r][c] = 0;
}

template <std::size_t size>
Matrix<size>::Matrix(const int(&m)[size][size]) {
    for (std::size_t r = 0; r < size; ++r)
        for (std::size_t c = 0; c < size; ++c)
            m_mat[r][c] = m[r][c];
}

template <std::size_t size>
Matrix<size>::Matrix(const Matrix& rhs) {
    for (std::size_t r = 0; r < size; ++r)
        for (std::size_t c = 0; c < size; ++c)
            m_mat[r][c] = rhs.m_mat[r][c];
}

template <std::size_t size>
Matrix<size>::~Matrix() {}

template <std::size_t size>
Matrix<size>& Matrix<size>::operator = (const Matrix& rhs) {
    for (std::size_t r = 0; r < size; ++r)
        for (std::size_t c = 0; c < size; ++c)
            m_mat[r][c] = rhs.m_mat[r][c];

    return *this;
}

    template <std::size_t size>
    Matrix<size> Matrix<size>::operator * (const Matrix& rhs) {
        Matrix<size> m;
        for (std::size_t r = 0; r < size; ++r)
            for (std::size_t c = 0; c < size; ++c)
                for (std::size_t k = 0; k < size; ++k)
                    m.m_mat[r][c] += (m_mat[r][k] * rhs.m_mat[k][c]);

        return m;
    }

template <std::size_t size>
void Matrix<size>::operator *= (const Matrix& rhs) {
    Matrix<size> m;
    for (std::size_t r = 0; r < size; ++r)
        for (std::size_t c = 0; c < size; ++c)
            for (std::size_t k = 0; k < size; ++k)
                m_mat[r][c] = m_mat[r][c] + (m_mat[r][k] * rhs.m_mat[k][c]);
}

template <std::size_t size>
int Matrix<size>::get() const {
    return m_mat[0][1];
}

template <std::size_t size>
void Matrix<size>::print() const {
    printf("[%d][%d]\n", m_mat[0][0], m_mat[0][1]);
    printf("[%d][%d]\n", m_mat[1][0], m_mat[1][1]);
}
#endif // DISCREATE_MATHEMATICS_CHAPTER_8_8_1_MATRIX_H_
