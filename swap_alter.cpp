#include<iostream>
using namespace std;
void swapalter(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
       if(i+1<n)
       {
        swap(arr[i],arr[i+1]);
       }
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    swapalter(arr,6);
    for(int i=0;i<6;i++)
    {
        cout << arr[i];
    }
}