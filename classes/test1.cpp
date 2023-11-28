#include <iostream>
#include <string>
using namespace std;
// Base class Animal
class Animal
{
protected:
    string name;
    int age;

public:
    Animal(const string &_name, int _age) : name(_name), age(_age) {}

    void displayInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Lion
class Lion : public Animal
{
public:
    Lion(const string &_name, int _age) : Animal(_name, _age) {}

    void roar() const
    {
        cout << "The lion roars loudly." <<endl;
    }
};

// Derived class Elephant
class Elephant : public Animal
{
public:
    Elephant(const string &_name, int _age) : Animal(_name, _age) {}

    void trumpet() const
    {
        cout << "The elephant trumpets with its trunk." << endl;
    }
};

// Derived class Monkey
class Monkey : public Animal
{
public:
    Monkey(const string &_name, int _age) : Animal(_name, _age) {}

    void swing() const
    {
        cout << "The monkey swings from branch to branch." << endl;
    }
};

// Test case
int main()
{
    Lion simba("Simba", 5);
    simba.displayInfo();
    simba.roar();

    return 0;
}