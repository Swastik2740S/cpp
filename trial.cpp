#include <iostream>
#include <bitset>

int main() {
    int num = -10; // Negative number

    // Convert to binary using two's complement
    std::bitset<32> binary(num);

    // Print the binary representation
    std::cout << "Binary representation of " << num << ": " << binary << std::endl;

    return 0;
}
