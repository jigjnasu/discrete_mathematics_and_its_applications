#include <cstdio>
#include <sstream>
#include <vector>

int random(int x, int n) {
    std::ostringstream oss;
    oss << x * x;
    
    std::string num;
    for (int i = 0; i < 2 * n - oss.str().size(); ++i)
        num.push_back('0');
    num += oss.str();

    const int start = n % 2 ? (n / 2) + 1 : n / 2;
    return std::atoi(num.substr(start, n).c_str());
}

int main() {
    int x = 2357;
    int n = 4;

    printf("--------------------------------------------\n");
    for (int i = 0; i < 7; ++i) {
        printf("%4d ", x);
        x = random(x, n);
    }

    printf("\n--------------------------------------------\n");
    
    return 0;
}
