#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void showA()
    {
        cout << "This is class A -root \n";
    }
};

class B:public A
{
    public:
    void show()
    {
        cout << "This is class B";
    }
};

int main()
{
    A h1;

    h1.showA();
}