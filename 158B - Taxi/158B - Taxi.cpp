#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> groups(5, 0);
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        groups[s]++;
    }

    int taxis = 0;

    taxis += groups[4];

    int minThreeOne = min(groups[3], groups[1]);
    taxis += minThreeOne;
    groups[3] -= minThreeOne;
    groups[1] -= minThreeOne;

    taxis += groups[3];

    taxis += groups[2] / 2;
    if (groups[2] % 2 != 0) {
        taxis += 1;
        groups[1] -= min(2, groups[1]);
    }

    if (groups[1] > 0) {
        taxis += (groups[1] + 3) / 4;
    }

    cout << taxis << endl;

    return 0;
}
