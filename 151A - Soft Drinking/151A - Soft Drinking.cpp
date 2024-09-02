#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_limes = c * d;
    int total_salt = p;

    int toasts_from_drink = total_drink / nl;
    int toasts_from_limes = total_limes;
    int toasts_from_salt = total_salt / np;

    int max_toasts = min({toasts_from_drink, toasts_from_limes, toasts_from_salt});
    cout << max_toasts / n << endl;

    return 0;
}
