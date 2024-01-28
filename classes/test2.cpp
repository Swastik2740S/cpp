// In an online shopping application, customers can add items to their shopping cart. Implement a
// class ShoppingCart with a method addItem that adds items to the cart. If the customer attempts
// to add an item with a negative quantity or an invalid product code, throw appropriate exceptions
// (NegativeQuantityException or InvalidProductCodeExceptionz). Handle these exceptions and
// display error messages.

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class NegativeQuantityException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Error: Cannot add item. Negative quantity not allowed.";
    }
};

class InvalidProductCodeException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Error: Invalid product code. Please enter a valid product code.";
    }
};

class ShoppingCart
{
public:
    void addItem(const std::string &productCode, int quantity)
    {
        if (quantity < 0)
        {
            throw NegativeQuantityException();
        }

        if (productCode.empty())
        {
            throw InvalidProductCodeException();
        }

        // Here, you can implement the logic to add the item to the shopping cart
        std::cout << "Added item: Product Code - " << productCode << ", Quantity - " << quantity << std::endl;
    }
};

int main()
{
    ShoppingCart cart;

    try
    {
        // Test Case 1: Adding an Item with Negative Quantity
        cart.addItem("P001", -2);
    }
    catch (const NegativeQuantityException &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        // Test Case 2: Adding an Item with Invalid Product Code
        cart.addItem("", 3);
    }
    catch (const InvalidProductCodeException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}