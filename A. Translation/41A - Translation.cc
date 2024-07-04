#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    // Reverse the string s
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());

    // Check if reversed_s equals t
    if (reversed_s == t)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
