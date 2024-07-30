
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int denominations[] = {100, 20, 10, 5, 1};
    int bill_count = 0;

    for (int i = 0; i < 5; ++i) {
        bill_count += n / denominations[i];
        n %= denominations[i];
    }

    cout << bill_count << endl;

    return 0;
}
