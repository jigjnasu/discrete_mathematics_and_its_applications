/*
  Discrete Mathematics and Its Applications
  By Kenneth H. Rosen
  Chapter 5.3 Recursive Definitions and Structural Induction
 */

#include <cstdio>
#include <vector>
#include <cstdlib>

// This definition is based on divide and conquer
// But this also has same number of O(n - 1) comparissions in worst case as linear search has
int min(const std::vector<int>& V, int start, int end) {
    if (start == end) {
        return V[start];
    } else {
        const int mid = (start + end) >> 1;
        const int a = min(V, start, mid);
        const int b = min(V, mid + 1, end);
        return a < b ? a : b;
    }
}

// This definition is based on divide and conquer
// But this also has same number of O(n - 1) comparissions in worst case as linear search has
int max(const std::vector<int>& V, int start, int end) {
    if (start == end) {
        return V[start];
    } else {
        const int mid = (start + end) >> 1;
        const int a = max(V, start, mid);
        const int b = max(V, mid + 1, end);
        return a > b ? a : b;
    }    
}

int random(int min, int max) {
    return min + rand() % (max - min + 1);
}

void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

void test_min_max() {
    std::vector<int> v;
    const int a = 1;
    const int b = 1000;
    for (int i = 0; i < 100; ++i)
        v.push_back(random(a, b));

    print(v);
    printf("min == [%d]\n", min(v, 0, v.size() - 1));
    printf("max == [%d]\n", max(v, 0, v.size() - 1));           
}

int main() {
    test_min_max();
    
    return 0;
}
