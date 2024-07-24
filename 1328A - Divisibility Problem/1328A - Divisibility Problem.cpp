#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;

        long long moves = (remainder == 0) ? 0 : (b - remainder);

        cout << moves << endl;
    }

    return 0;
}
