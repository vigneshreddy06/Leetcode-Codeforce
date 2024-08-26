#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    double max_gap = 0;
    for (int i = 1; i < n; ++i) {
        max_gap = max(max_gap, (double)(a[i] - a[i - 1]));
    }

    double d = max(max_gap / 2.0, (double)max(a[0] - 0, l - a[n - 1]));

    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
