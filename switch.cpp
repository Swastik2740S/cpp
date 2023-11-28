#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Press 1 for adddition" << endl;
    cout << "Press 2 for subtraction \n";
    cout << "Press 3 for multiplication\n";
    cout << "Press 4 for division\n";
    int ch;
    cout << "Enter your choice:";
    cin  >> ch;
    switch(ch)
    {
        case 1:
        cout << a+b;
        break;
        case 2:
        cout << a-b;
        break;
        case 3:
        cout << a*b;
        break;
        case 4:
        cout << a/b;
        break;
    }
} 