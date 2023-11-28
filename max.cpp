#include<iostream>
using namespace std;
void max(int a,int b)
{
    if(a<b)
    {
      cout << "B is max";
    }
    else
    {
        cout << "A is max";
    }
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    max(a,b);
}