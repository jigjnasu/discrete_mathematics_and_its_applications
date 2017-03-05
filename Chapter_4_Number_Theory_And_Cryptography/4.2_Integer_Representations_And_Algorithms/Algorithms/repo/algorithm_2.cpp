#include <cstdio>
#include <string>

int random(int min, int max) {
    return min + rand() % (max - min) + 1;
}

int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        const int t = power(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}

std::string to_binary(int n) {
    std::string number;
    while (n) {
        number.push_back((n % 2) + '0');
        n /= 2;
    }

    const std::size_t size = number.size();
    for (int i = 0; i < 31 - size; ++i)
        number.push_back('0');

    return number;
}

int to_decimal(const std::string& n) {
    int number = 0;
    for (int i = 0; i < n.size(); ++i)
        if (n[i] == '1')
            number += (1 << i);

    return number;
}

void print(const std::string& n) {
    for (int i = n.size() - 1; i >= 0; --i) {
        printf("%c ", n[i]);
        if (i % 4 == 0)
            printf(" ");
    }
}

std::string add(const std::string& a, const std::string& b) {
    std::string s;
    int i = 0;
    int j = 0;
    int c = 0;
    
    while (i < a.size() && j < b.size()) {
        const int n_a = a[i] - '0';
        const int n_b = b[j] - '0';
        const int d = (n_a + n_b + c) >> 1;
        s.push_back((n_a + n_b + c - 2 * d) + '0');
        c = d;
        ++i;
        ++j;
    }

    while (i < a.size()) {
        const int n_a = a[i] - '0';
        const int d = (n_a + c) >> 1;
        s.push_back((n_a + c - 2 * d) + '0');
        c = d;
        ++i;
    }

    while (j < b.size()) {
        const int n_b = b[j] - '0';
        const int d = (n_b + c) >> 1;
        s.push_back((n_b + c - 2 * d) + '0');
        c = d;
        ++j;
    }    

    return s;
}

void test_add() {
    const int min = 1;
    const int max = 1000000;
    
    for (int i = 0; i < 10; ++i) {
        printf("----------------------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max / 5);
        
        printf("[%10d] + [%10d] == [%10d]\n", a, b, a + b);
        const std::string s_a = to_binary(a);
        const std::string s_b = to_binary(b);        
        print(s_a);
        printf("\n");
        print(s_b);
        printf("\n----------------------------------------------------------------\n");
        const std::string s_c = add(s_a, s_b);
        print(s_c);
        printf("\nBinary to Decimal == [%d]\n", to_decimal(s_c));
        printf("\n----------------------------------------------------------------\n");        
    }
}

int main() {
    test_add();

    return 0;
}
