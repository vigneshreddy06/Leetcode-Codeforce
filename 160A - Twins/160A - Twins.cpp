#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumCoinsToTake(int n, vector<int>& coins) {
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += coins[i];
    }
    
    sort(coins.rbegin(), coins.rend()); 
    int mySum = 0;
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        mySum += coins[i];
        count++;
        if (mySum > totalSum / 2) {
            break;
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    
    int result = minimumCoinsToTake(n, coins);
    cout << result << endl;
    
    return 0;
}
