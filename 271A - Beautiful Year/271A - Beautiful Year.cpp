#include <iostream>
#include <set>
#include <string>

using namespace std;

bool hasDistinctDigits(int year)
{
    string yearStr = to_string(year);
    set<char> digits;
    for (char ch : yearStr)
    {
        if (digits.count(ch))
        {
            return false;
        }
        digits.insert(ch);
    }
    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        if (hasDistinctDigits(y))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
