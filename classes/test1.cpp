// In a zoo simulation, you are tasked with designing classes for different animals. Implement a
// base class Animal with attributes like name and age. Create derived classes for specific
// animals, such as Lion, Elephant, and Monkey, inheriting from the Animal class. Include specific
// behaviors for each animal.

#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;

class Animal{
    public:
    char name;
    int age;
};

class Lion: public Animal{
    public:
    void displaylion(){
    cout << "Lion roars";
    cout << endl;
    }
};

class elephent: public Animal{
    public:
    void displayelephent(){
    cout << "Elephent is big";
    cout << endl;
    }
};

class monkey: public Animal{
    public:
    void displaymonkey(){
    cout << "Monkay is jatin";
    cout << endl;
    }
};

int main()
{
    monkey m;
    m.displaymonkey();
    elephent e;
    e.displayelephent();
    Lion l;
    l.displaylion();


} 