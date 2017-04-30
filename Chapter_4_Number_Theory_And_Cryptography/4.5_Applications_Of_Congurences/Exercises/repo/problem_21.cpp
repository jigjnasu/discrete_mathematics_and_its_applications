#include <cstdio>
#include <string>

void find(const std::string& usps) {
    int check = 0;
    int Q = 0;
    std::size_t i = 0;

    while (i < usps.size() - 1) {
        if (usps[i] != 'Q')
            check += (usps[i] - '0');
        ++i;
    }

    int t = usps[i] - '0' - check;
    t = (-1 * ((t / 9) - 1)) * 9;
    t = (t + usps[i] - '0' - check) % 9;
    printf("USPS == [%s] || Linear congurence Q + %2d == %d\n",
           usps.c_str(), check, t);
}

void test(const std::string& usps) {
    printf("-------------------------------------\n");
    find(usps);
    printf("-------------------------------------\n");
}

int main() {
    const std::string a = "493212Q0688";
    test(a);

    const std::string b = "850Q9103858";
    test(b);

    const std::string c = "2Q941007734";
    test(c);

    const std::string d = "66687Q03201";
    test(d);

    return 0;
}
