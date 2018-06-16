/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Solution 7
  Rakesh Kumar, cpp.rakesh@gmail.com
  15/06/2018
 */

#include <bits/stdc++.h>

int max(const std::vector<int>& v) {
    int m = v[0];
    for (std::size_t i = 1; i < v.size(); ++i) {
        int t = v[i];
        if (t > m)
            m = t;
        for (std::size_t j = i + 1; j < v.size(); ++j) {
            t += v[j];
            if (t > m)
                m = t;
        }
    }

    return m;
}


int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

std::vector<int> get(int n) {
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
        v.push_back(random(-10, 10));

    return v;
}

void print(const std::vector<int>& v) {
    printf("---------------------------------------------------\n");
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n---------------------------------------------------\n");
}

int main() {
    const std::vector<int> v = get(10);
    print(v);
    printf("Maximum sub array == [%d]\n", max(v));

    return 0;
}
