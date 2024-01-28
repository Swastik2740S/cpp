#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main() {
    // Declare variables to store input as strings
    string num1_str, num2_str;

    // Take input for the first number
    cout << "Enter the first number: ";
    cin >> num1_str;

    // Take input for the second number
    cout << "Enter the second number: ";
    cin >> num2_str;

    // Convert strings to integers
    int num1 = atoi(num1_str.c_str());
    int num2 = atoi(num2_str.c_str());

    // Perform addition
    int sum = num1 + num2;

    // Output the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
