#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={56,23,98,45,23,89,45,67};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);

    cout << "Largest three are:";
    cout << arr[n-1] << " " << arr[n-2]<< " " <<arr[n-3];
}