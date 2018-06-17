/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 8.3 Divide and Conquer Algorithms and Recurrence Relations
  Example 1
  Rakesh Kumar, cpp.rakesh@gmail.com
  18/06/2018
 */

/*
  This is the source code of binary search
  Prerequisite, sorted vector

  Recurrence relation  = f(n / 2) + 2
  Time Complexity = O(logn)
*/


#include <bits/stdc++.h>

int search(const std::vector<int>& list, int n, int s, int e) {
    while (s <= e) {
        if (s == e)
            if (list[s] == n)
                return s;
            else
                return -1;

        const int m = (s + e) >> 1;
        if (list[m] == n)
            return m;
        else if (n > list[m])
            s = m + 1;
        else
            e = m - 1;
    }

    return -1;
}

void print(const std::vector<int>& list) {
    printf("----------------------------------------------------\n");
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n----------------------------------------------------\n");
}

int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

std::vector<int> get(int n) {
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
        v.push_back(random(1, 10000));

    return v;
}

void test() {
    std::vector<int> list = get(20);
    print(list);
    std::sort(list.begin(), list.end());
    print(list);

    int n = random(1, 10000);
    printf("[%5d] found at [%2d] index\n", n, search(list, n, 0, list.size() - 1));

    n = 28;
    printf("[%5d] found at [%2d] index\n", n, search(list, n, 0, list.size() - 1));

    n = 9384;
    printf("[%5d] found at [%2d] index\n", n, search(list, n, 0, list.size() - 1));
}


int main() {
    test();

    return 0;
}
