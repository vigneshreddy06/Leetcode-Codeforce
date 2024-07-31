#include <iostream>
#include <set>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    if (input.length() <= 2) {
        std::cout << 0 << std::endl;
        return 0;
    }

    input = input.substr(1, input.length() - 2);

    std::set<char> letters;
    std::stringstream ss(input);
    std::string item;

    while (std::getline(ss, item, ',')) {
        if (!item.empty() && item[0] == ' ') {
            item = item.substr(1);
        }
        if (!item.empty()) {
            letters.insert(item[0]);
        }
    }

    std::cout << letters.size() << std::endl;

    return 0;
}
