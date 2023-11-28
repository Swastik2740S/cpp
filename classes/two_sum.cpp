#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,7,11,15};
    int n= sizeof(arr)/sizeof(arr[0]);

    int target = 9;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<","<<j;
            }
        }

    }
    return 0;
    
}