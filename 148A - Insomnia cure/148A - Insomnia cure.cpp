#include <iostream>
#include <set>

int main() {
    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;

    std::set<int> damagedDragons;

    for (int i = k; i <= d; i += k) {
        damagedDragons.insert(i);
    }

    for (int i = l; i <= d; i += l) {
        damagedDragons.insert(i);
    }

    for (int i = m; i <= d; i += m) {
        damagedDragons.insert(i);
    }

    for (int i = n; i <= d; i += n) {
        damagedDragons.insert(i);
    }

    std::cout << damagedDragons.size() << std::endl;

    return 0;
}
