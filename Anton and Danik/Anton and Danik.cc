#include <iostream>
#include <string>

int main()
{
    int n;
    std::string s;

    std::cin >> n >> s;

    int anton_wins = 0;
    int danik_wins = 0;

    for (char game : s)
    {
        if (game == 'A')
        {
            anton_wins++;
        }
        else if (game == 'D')
        {
            danik_wins++;
        }
    }

    if (anton_wins > danik_wins)
    {
        std::cout << "Anton" << std::endl;
    }
    else if (danik_wins > anton_wins)
    {
        std::cout << "Danik" << std::endl;
    }
    else
    {
        std::cout << "Friendship" << std::endl;
    }

    return 0;
}
