/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 6.6 Generating Permutations and Combinations
  Algorithm 1
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  22/08/2017
 */

#ifndef DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_1_H_
#define DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_1_H_

#include <iostream>
#include <vector>

namespace discrete_mathematics {
    namespace algorithms {
        template <typename T>
        class Permutations {
        public:
            Permutations();
            ~Permutations();
            void Generate(std::vector<T>& v);
            
        private:
            void m_swap(T& a, T& b);
            void m_print(const std::vector<T>& v);
        };
    };
};

template <typename T>
discrete_mathematics::algorithms::Permutations<T>::Permutations() {}

template <typename T>
discrete_mathematics::algorithms::Permutations<T>::~Permutations() {}

template <typename T>
void discrete_mathematics::algorithms::Permutations<T>::Generate(std::vector<T>& v) {
    while (1) {
        m_print(v);
        int j = v.size() - 2;
        while (v[j] > v[j + 1])
            --j;
        
        if (j < 0)
            break;
        
        int k = v.size() - 1;        
        while (v[j] > v[k])
            --k;
        
        m_swap(v[j], v[k]);
        
        int r = v.size() - 1;
        int s = j + 1;
        while (r > s) {
            m_swap(v[r], v[s]);
            --r;
            ++s;
        }
    }    
}

template <typename T>
void discrete_mathematics::algorithms::Permutations<T>::m_swap(T& a, T& b) {
    const T t = a;
    a = b;
    b = t;
}

template <typename T>
void discrete_mathematics::algorithms::Permutations<T>::m_print(const std::vector<T>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

#endif // DISCRETE_MATHEMATICS_CHAPTER_6_6_ALGORITHM_1_H_
