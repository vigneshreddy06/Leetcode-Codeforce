#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    if (n <= 1) {
        cout << 0 << endl;
        return 0;
    }

    int amazing_count = 0;
    int best = scores[0];
    int worst = scores[0];

    for (int i = 1; i < n; ++i) {
        if (scores[i] > best) {
            amazing_count++;
            best = scores[i];
        } else if (scores[i] < worst) {
            amazing_count++;
            worst = scores[i];
        }
    }

    cout << amazing_count << endl;
    return 0;
}
