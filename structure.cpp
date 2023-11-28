#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name[10];
    int fee;
};
int main()
{
    struct student s1;
    cout << "Enter roll no:";
    cin >> s1.roll;
    cout << "Enter your name:";
    cin >> s1.name;
    cout << "Enter fees:";
    cin >> s1.fee;

    cout << endl;
    cout << s1.roll<<endl;
    cout <<s1.name<<endl;
    cout << s1.fee<<endl;
    return 0;
}