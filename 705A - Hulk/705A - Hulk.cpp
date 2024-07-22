#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string result = "I hate";

    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result += " that I love";
        } else {
            result += " that I hate";
        }
    }

    result += " it";

    cout << result << endl;

    return 0;
}
