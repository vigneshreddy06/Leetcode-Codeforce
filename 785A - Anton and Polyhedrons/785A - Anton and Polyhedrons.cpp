#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<std::string, int> polyhedron_faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int total_faces = 0;
    for (int i = 0; i < n; ++i) {
        std::string polyhedron;
        std::cin >> polyhedron;
        total_faces += polyhedron_faces[polyhedron];
    }

    std::cout << total_faces << std::endl;
    return 0;
}
