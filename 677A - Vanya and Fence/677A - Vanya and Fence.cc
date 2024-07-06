#include <iostream>
#include <vector>

int main()
{
    int n, h;
    std::cin >> n >> h;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int total_width = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > h)
        {
            total_width += 2;
        }
        else
        {
            total_width += 1;
        }
    }

    std::cout << total_width << std::endl;

    return 0;
}
