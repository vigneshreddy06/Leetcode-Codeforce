#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int total_time = 240 - k; 
    int time_spent = 0;
    int problems_solved = 0;

    for (int i = 1; i <= n; ++i) {
        time_spent += 5 * i; 
        if (time_spent <= total_time) {
            problems_solved++;
        } else {
            break;
        }
    }

    cout << problems_solved << endl;

    return 0;
}
