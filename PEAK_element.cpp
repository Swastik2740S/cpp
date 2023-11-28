#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={100,3,20,4,90,6};
    for(int i=0;i<6;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            cout << arr[i] << endl;
        }
    }

}