#include <iostream>

// Function to count the number of bits to change from a to b
int countBitsToChange(int a, int b) {
    int xorResult = a ^ b;
    int count = 0;

    // Count the number of set bits in the XOR result
    while (xorResult != 0) {
        // Increment count if the least significant bit is set
        count += xorResult & 1;
        // Right shift XOR result to check the next bit
        xorResult >>= 1;
    }

    return count;
}

int main() {
    int a, b;

    // Input two numbers
    std::cout << "Enter the first number (a): ";
    std::cin >> a;

    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    // Calculate and display the number of bits to change
    int result = countBitsToChange(a, b);
    std::cout << "Number of bits to change from " << a << " to " << b << ": " << result << std::endl;

    return 0;
}
