#include <iostream>
#include <string>
#include <vector>

int main() {
    int a, b;
   
    if (!(std::cin >> a >> b)) {
        return 1; // Handle invalid input
    }


    std::vector<std::string> num_str = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


    for (int n = a; n <= b; ++n) {
        if (n >= 1 && n <= 9) {

            std::cout << num_str[n - 1] << std::endl;
        } else if (n > 9) {
 
            if (n % 2 == 0) {
                std::cout << "even" << std::endl;
            } else {
                std::cout << "odd" << std::endl;
            }
        }
    }

    return 0;
}
