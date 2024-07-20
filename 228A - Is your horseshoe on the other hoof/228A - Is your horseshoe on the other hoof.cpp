#include <iostream>
#include <set>

int main() {
    int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;

    std::set<int> horseshoe_colors;
    horseshoe_colors.insert(s1);
    horseshoe_colors.insert(s2);
    horseshoe_colors.insert(s3);
    horseshoe_colors.insert(s4);

    int unique_colors = horseshoe_colors.size();
    int horseshoes_needed = 4 - unique_colors;

    std::cout << horseshoes_needed << std::endl;

    return 0;
}
