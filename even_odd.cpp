#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr1[n];
    int arreven[n];
    int arrodd[n];
    for(int i=0;i<n;i++)
    {
       cin >> arr1[i];
    }
    int e=0;
    int o =0;

    for(int i=0;i<n;i++)
    {
        if(arr1[i]%2==0)
        {
           arreven[e++]=arr1[i];
        }
        else{
             arrodd[o++]=arr1[i];
        }
    }
    
    for(int i=0;i<e;i++)
    {
        cout << arreven[i];
    }
    cout << endl;
    for(int i=0;i<o;i++)
    {
        cout << arrodd[i];
    }

}