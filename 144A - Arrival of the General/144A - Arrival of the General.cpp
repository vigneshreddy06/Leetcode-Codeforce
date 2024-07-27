#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int max_height = *max_element(heights.begin(), heights.end());
    int min_height = *min_element(heights.begin(), heights.end());

    int max_index = -1;
    int min_index = -1;

    for (int i = 0; i < n; ++i) {
        if (heights[i] == max_height && max_index == -1) {
            max_index = i;
        }
        if (heights[i] == min_height) {
            min_index = i;
        }
    }

    int seconds = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        --seconds;
    }

    cout << seconds << endl;
    
    return 0;
}
