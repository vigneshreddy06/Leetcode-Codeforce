#include <iostream>
#include <cctype>
#include <string>
#include <algorithm> 

int main() {
    std::string word;
    std::cin >> word;
    
    bool allUpper = true;
    bool firstUpper = isupper(word[0]);
    
    for (char ch : word) {
        if (!isupper(ch)) {
            allUpper = false;
            break;
        }
    }
    
    if (allUpper || (firstUpper && std::all_of(word.begin() + 1, word.end(), ::isupper))) {
        for (char &ch : word) {
            ch = isupper(static_cast<unsigned char>(ch)) ? tolower(static_cast<unsigned char>(ch)) : toupper(static_cast<unsigned char>(ch));
        }
    }
    
    std::cout << word << std::endl;
    return 0;
}
