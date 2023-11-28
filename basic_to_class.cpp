//step1. create class Time
#include<iostream>
using namespace std;
class Time
{int hrs,mins;
public:
    Time(int d)
 {hrs=d/60; mins=d%60;}

void disp()
{
cout<<"Hrs="<<hrs<<"Minutes="<<mins;
}
};

int main()
{
    int dur;
    cout << "Enter duration of meeting";
    cin >> dur;
    Time t = dur;
    t.disp();
    return 0;
}