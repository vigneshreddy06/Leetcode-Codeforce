#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int current_passengers = 0;
    int max_capacity = 0;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        current_passengers -= a;
        current_passengers += b;

        max_capacity = max(max_capacity, current_passengers);
    }

    cout << max_capacity << endl;

    return 0;
}
