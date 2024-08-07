#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

int main() {
    std::string word;
    std::cin >> word;
    
    bool allUpper = std::all_of(word.begin(), word.end(), [](unsigned char ch){ return std::isupper(ch); });
    bool firstUpperRestLower = std::isupper(word[0]) && std::all_of(word.begin() + 1, word.end(), [](unsigned char ch){ return std::isupper(ch); });
    
    if (allUpper || firstUpperRestLower) {
        for (char &ch : word) {
            if (std::isupper(static_cast<unsigned char>(ch))) {
                ch = std::tolower(static_cast<unsigned char>(ch));
            } else {
                ch = std::toupper(static_cast<unsigned char>(ch));
            }
        }
    }
    
    std::cout << word << std::endl;
    return 0;
}
