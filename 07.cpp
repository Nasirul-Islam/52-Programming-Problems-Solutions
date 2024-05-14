#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    std::cin >> t;
    std::cin.ignore(); // Ignore the newline character after the integer input
    while (t != 0) {
        std::string nums;
        std::getline(std::cin, nums); // Read the entire line
        std::stringstream ss(nums); // Create a stringstream from the input line
        std::string word;
        int linum = 0;
        // Count the number of words in the line
        while (ss >> word) {
            linum++;
        }
        std::cout << linum << std::endl;
        t--;
    }
    return 0;
}
