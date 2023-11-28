#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int roll_no;

};

int main()
{
    student s;
    cin >> s.name;
    cin >> s.roll_no;

    cout << s.name << endl;
    cout << s.roll_no;
}