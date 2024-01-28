#include<bits/stdc++.h>
using namespace std;
//function for additiion
int main()
{
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        cout << arr[i];
    }
}