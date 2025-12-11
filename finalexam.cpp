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
        std::cerr << "Error: could not open file '" << filename << "'. Make sure it is in the same directory.\n";
        return 1;
    }

    std::map<std::string,int> counts;
    std::string origin, dest;
    
    // ===== Milestone 1 START =====
    while (infile >> origin >> dest) {
        ++counts[origin];// this will default initialize to 0 if key not present
        ++counts[dest];  // same here
    }
    
    infile.close();
    std::cout << "All airport traffic counts:\n";
    for (const auto &p : counts) {
        std::cout << p.first << " " << p.second << "\n";
    }

    std::cout << "\n";
    // ===== Milestone 2 START =====
    int maxCount = 0;
    for (const auto &p : counts) {
        if (p.second > maxCount) {
            maxCount = p.second;
        }
        else {
            continue;
        }
    }

    return 0;
}