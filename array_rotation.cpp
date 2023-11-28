#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter rotation:";
    cin >> k;
    rotate(a,a+k+1,a+n);
    cout << "Rotated array";
    for(int i=0;i<n;i++)
    {
       cout << a[i];
    }
}