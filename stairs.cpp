#include<bits/stdc++.h>
using namespace std;
int stairs(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }

    return stairs(n-1)+stairs(n-2);
}

int main()
{
    int a;
    cin >> a;
    cout << stairs(a);
}