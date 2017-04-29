#include <cstdio>
#include <string>

int check_digit(const std::string& message) {
    int check = 0;
    for (std::size_t i = 0; i < message.size(); ++i)
        check += (i + 1) * (message[i] - '0');
    return check % 11;
}

int main() {
    // ISBN = 0-07-119881.
    const std::string isbn = "007119881";
    printf("----------------------------------------------\n");
    printf("check_digit == [%d]\n", check_digit(isbn));
    printf("----------------------------------------------\n");    
    
    return 0;
}
