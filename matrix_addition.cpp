#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n][n];
    int arr2[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr1[i][j];
        }
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr2[i][j];
        }
    }


    int sum[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j] = arr1[i][j]-arr2[i][j];
        }
    }   

    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
     
}