#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{ 
      for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }

}


int main()
{
    int arr[5]={1,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubblesort(arr,n);

     for(int i=0;i<n;i++)
     {
        cout << arr[i];
     }
}