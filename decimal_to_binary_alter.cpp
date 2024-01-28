#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int remainder;
    int ans=0;
    int base= 1;
    while(n!=0)
    {
        remainder = n%2;
        ans = ans + remainder * base;
        n = n /2;
        base = base * 10;
    }

    cout << ans;
}