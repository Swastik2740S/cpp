#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,9,2,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int temp;
       for(int j=i+1;j<n;j++)
       {
        if(arr[i]>arr[j])
        swap(arr[i],arr[j]);    
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }


}