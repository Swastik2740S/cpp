#include<iostream>
using namespace std;
struct person
{
    char name[10];
    int age;
    float salary;
};
int main()
{
    struct person p1;
    cout << "Enter your name:";
    cin.get(p1.name,10);
    cout << "Enter your age:";
    cin >> p1.age;
    cout << "Enter your salary:";
    cin >> p1.salary;

    cout << p1.name << endl;
    cout << p1.age << endl;
    cout << p1.salary <<endl;
    return 0;
}