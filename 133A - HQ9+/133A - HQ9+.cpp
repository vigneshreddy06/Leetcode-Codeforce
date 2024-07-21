#include <iostream>
#include <string>

int main() {
    std::string p;
    std::cin >> p;

    bool producesOutput = false;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            producesOutput = true;
            break;
        }
    }

    if (producesOutput) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
