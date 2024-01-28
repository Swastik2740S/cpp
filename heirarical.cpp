#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void show()
    {
        cout  << "i am in class a"
    }
   
};

class B:public A
{
   public:
};

int main()
{
    A h1;
   
    h1.showA();
}