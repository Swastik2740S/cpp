#include<iostream>
using namespace std;

int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    cout << "Answer is:"<<ans;
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    power(a,b);
}