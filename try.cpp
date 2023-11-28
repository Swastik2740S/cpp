
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result;
    bool inWord = false;

    for (char c : input) {
        if (std::isalpha(c)) {
            if (!inWord) {
                result += c;
                inWord = true;
            } else {
                result += '#';
            }
        } else {
            result += c;
            inWord = false;
        }
    }

    std::cout << "Modified string: " << result << std::endl;
    return 0;
}