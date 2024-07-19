#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2;
    
    // Read the two binary numbers
    cin >> num1 >> num2;
    
    // Initialize the result string
    string result = "";
    
    // Iterate over the length of the numbers
    for (int i = 0; i < num1.length(); ++i) {
        // Compare the corresponding characters
        if (num1[i] != num2[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
