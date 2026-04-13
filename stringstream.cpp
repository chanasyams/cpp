#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> parseInts(std::string str) {
    std::vector<int> integers;
    std::stringstream ss(str);
    int temp;
    char ch;

    while (ss >> temp) {
        integers.push_back(temp);
        ss >> ch;
    }

    return integers;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    return 0;
}
