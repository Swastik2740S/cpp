#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int index=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> n;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[index]=arr[i];
            index ++;
        }
    }
    return index;
}