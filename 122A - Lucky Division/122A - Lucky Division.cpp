#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isLucky(int number) {
    string str = to_string(number);
    for (char c : str) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> luckyNumbers;
    for (int i = 1; i <= 1000; ++i) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }
    
    bool isAlmostLucky = false;
    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            isAlmostLucky = true;
            break;
        }
    }
    
    if (isAlmostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
