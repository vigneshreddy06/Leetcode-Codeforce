#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int different_days = min(a, b);
    int remaining_socks = abs(a - b);
    int same_days = remaining_socks / 2;

    cout << different_days << " " << same_days << endl;

    return 0;
}
