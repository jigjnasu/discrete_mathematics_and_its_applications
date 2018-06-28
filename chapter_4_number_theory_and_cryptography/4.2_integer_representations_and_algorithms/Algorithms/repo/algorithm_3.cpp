/*
  Discrete Mathematics and It's Applications.
  By: Kneeth H Rosen
  Algorithm 3, Chapter 4.2
  Author: Rakesh Kumar, cpp.rakesh@gmail.com
  Date: March 7th, 2017
 */

#include <cstdio>
#include <string>
#include <cstdlib>

int random(int min, int max) {
    return min + rand() % (max - min) + 1;
}

std::string to_binary(int n) {
    std::string number;
    while (n) {
        number.push_back((n % 2) + '0');
        n /= 2;
    }

    return number;
}

int to_decimal(const std::string& n) {
    int sum = 0;
    for (int i = n.size() - 1; i >= 0; --i)
        if (n[i] == '1')
            sum += (1 << i);

    return sum;
}

void print(const std::string& n) {
    for (int i = n.size() - 1; i >= 0; --i)
        if ((i % 4) == 0)
            printf("%c ", n[i]);
        else
            printf("%c", n[i]);
    printf("\n");
}

std::string add(const std::string& a, const std::string& b) {
    std::string sum;

    std::size_t i = 0;
    std::size_t j = 0;
    int c = 0;
    
    while (i < a.size() && j < b.size()) {
        const int n_a = a[i++] - '0';
        const int n_b = b[j++] - '0';
        const int d = (n_a + n_b + c) >> 1;
        sum.push_back((n_a + n_b + c - 2 * d) + '0');
        c = d;
    }

    while (i < a.size()) {
        const int n_a = a[i++] - '0';
        const int d = (n_a + c) >> 1;
        sum.push_back((n_a + c - 2 * d) + '0');
        c = d;
    }

    while (j < b.size()) {
        const int n_b = b[j++] - '0';
        const int d = (n_b + c) >> 1;
        sum.push_back((n_b + c - 2 * d) + '0');
        c = d;
    }

    if (c)
        sum.push_back('1');
    
    return sum;
}

std::string multiply(const std::string& a, const std::string& b) {
    std::string number;

    for (std::size_t i = 0; i < a.size(); ++i) {
        std::string temp;
        for (std::size_t j = 0; j < i; ++j)
            temp.push_back('0');

        for (std::size_t k = 0; k < b.size(); ++k)
            if (a[i] == '1' && b[k] == '1')
                temp.push_back('1');
            else
                temp.push_back('0');

        number = add(number, temp);
    }

    return number;
}

void test_add() {
    int min = 1;
    int max = 100;
    
    for (int n = 0; n < 10; ++n) {
        printf("------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max);        
        printf("[%4d] + [%4d] == [%d]\n", a, b, a + b);
        const std::string s_a = to_binary(a);
        const std::string s_b = to_binary(b);
        print(s_a);
        print(s_b);
        const std::string s_c = add(s_a, s_b);
        print(s_c);
        printf("Binary to decimal == [%d]\n", to_decimal(s_c));
        printf("------------------------------------------------\n");        
    }
}

void test_multiply() {
    int min = 1;
    int max = 100;
    
    for (int n = 0; n < 10; ++n) {
        printf("------------------------------------------------\n");
        const int a = random(min, max);
        const int b = random(min, max);        
        printf("[%4d] * [%4d] == [%d]\n", a, b, a * b);
        const std::string s_a = to_binary(a);
        const std::string s_b = to_binary(b);
        print(s_a);
        print(s_b);
        const std::string s_c = multiply(s_a, s_b);
        print(s_c);
        printf("Binary to decimal == [%d]\n", to_decimal(s_c));
        printf("------------------------------------------------\n");        
    }    
}

int main() {
    //test_add();
    test_multiply();

#if 0
    const std::string a = "";
    const std::string b = "000000";
    const std::string c = add(a, b);

    printf("a == [%s] || b == [%s] || c == [%s]\n",
           a.c_str(), b.c_str(), c.c_str());
#endif
    
    return 0;
}
