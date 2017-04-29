#include <cstdio>
#include <string>

void find(const std::string& usps) {
    int check = 0;
    int Q = 0;
    int i = 0;
    while (i < usps.size() - 1) {
        if (usps[i] != 'Q')
            Q = i + 1;
        else
            check += usps[i] - '0';
        ++i;
    }

    printf("Linear Congurence == Q + %d = %c (mod 9)\n",
           check, usps[i]);
    printf("Linear Congurence == Q = %d (mod 9)\n",  usps[i] - '0' - check);
}

void test(const std::string& usps) {
    printf("-------------------------------------\n");
    find(usps);
    printf("-------------------------------------\n");
}

int main() {
    const std::string a = "Q1223139784";
    test(a);

    const std::string b = "6702120Q988";
    test(b);

    const std::string c = "27Q41007734";
    test(c);

    const std::string d = "213279032Q1";
    test(d);

    return 0;
}
