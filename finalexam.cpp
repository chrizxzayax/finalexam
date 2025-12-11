// comsc 210 | final exam| Christian Molina
#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
    const std::string filename = "210-final-1-FA25.txt";
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error: could not open file '" << filename << "'. Please mister, make sure it is in the same directory.\n";
        return 1;
    }

    std::map<std::string,int> counts;

    // ===== Milestone 1 START =====
    std::string origin, dest;
    while (infile >> origin >> dest) {
        ++counts[origin];
        ++counts[dest];
    }

    // Print all airports and their counts in natural (alphabetical) order of the map.
    std::cout << "All airport traffic counts:\n";
    std::cout << "\n";
    // ===== Milestone 1 END =====
    return 0;
}