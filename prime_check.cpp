#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<=1)
    {
        cout << "not prime";
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout << "not prime";
            break;
        }
        else{
            cout << "prime";
            break;
        }
    }
}