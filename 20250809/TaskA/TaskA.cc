#include <iostream>
int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    if (n < 3) {
        std::cout << "No" << std::endl;
        return 0;
    }
    if (s[n - 1] == 'a' && s[n - 2] == 'e' && s[n - 3] == 't') {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}