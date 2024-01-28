#include <iostream>
#include <string>

int sumOfSumsOfDigits(int input1) {
    std::string numberString = std::to_string(input1);
    int sumOfSums = 0;
    int currentSum = 0;

    for (int i = 0; i < numberString.length(); ++i) {
        currentSum += numberString[i] - '0'; // Convert character to integer
        sumOfSums += currentSum;
    }

    return sumOfSums;
}

int main() {
    int inputNumber = 582109;
    int result = sumOfSumsOfDigits(inputNumber);

    std::cout << "Sum of Sums of Digits for " << inputNumber << " is: " << result << std::endl;

    return 0;
}
