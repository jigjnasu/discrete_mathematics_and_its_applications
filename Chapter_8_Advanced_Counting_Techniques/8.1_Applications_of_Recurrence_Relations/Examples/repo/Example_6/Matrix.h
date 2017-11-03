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
#include <cstring>

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

    int get(int r, int c) const;

    void print() const;

private:
    int m_mat[size][size];
};

template <std::size_t size>
Matrix<size>::Matrix() {
    memset(&m_mat, 0, sizeof(m_mat));
}

template <std::size_t size>
Matrix<size>::Matrix(const int(&m)[size][size]) {
    memcpy(&m_mat, &m, sizeof(m_mat));
}

template <std::size_t size>
Matrix<size>::Matrix(const Matrix& rhs) {
    memcpy(&m_mat, &rhs.m_mat, sizeof(m_mat));
}

template <std::size_t size>
Matrix<size>::~Matrix() {}

template <std::size_t size>
Matrix<size>& Matrix<size>::operator = (const Matrix& rhs) {
    memcpy(&m_mat, &rhs.m_mat, sizeof(m_mat));
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
int Matrix<size>::get(int r, int c) const {
    return m_mat[r][c];
}

template <std::size_t size>
void Matrix<size>::print() const {
    printf("-------------------------------\n");
    for (std::size_t r = 0; r < m_mat.size(); ++r) {
        for (std::size_t c = 0; c < m_mat.size(); ++c) {
            printf("%d ", m_mat[r][c]);
        }
        printf("\n");
    }
    printf("-------------------------------\n");
}
#endif // DISCREATE_MATHEMATICS_CHAPTER_8_8_1_MATRIX_H_
