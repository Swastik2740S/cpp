#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={0,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    int j=n-1;

   while(i<j)
   {
    while(arr[i]==0 && i<j)
    {
        i++;
    }
    while(arr[j]==1 && i<j)
    {
        j--;
    }

    if(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
   }

   for(int i=0;i<n;i++)
   {
    cout << arr[i];
   }
    
}