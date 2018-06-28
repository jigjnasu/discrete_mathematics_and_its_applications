#include <cstdio>
#include <string>

bool verify_usps(const std::string& usps) {
    int check = 0;
    int i = 0;
    while (i < usps.size() - 1)
        check += usps[i++] - '0';
    return usps[i] == (check % 9) + '0' ? true : false;
}

void test(const std::string& usps) {
    if (verify_usps(usps))
        printf("[%s] usps is a VALID\n", usps.c_str());
    else
        printf("[%s] usps is a NOT valid\n", usps.c_str());
}

int main() {
    printf("-------------------------------------\n");
    const std::string a = "74051489623";
    test(a);

    const std::string b = "88382013445";
    test(b);

    const std::string c = "56152240784";
    test(c);

    const std::string d = "66606631178";
    test(d);
    printf("-------------------------------------\n");

    return 0;
}
