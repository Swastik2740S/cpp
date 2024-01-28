#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int sum1=0;
    int sum2=0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
    //right diagonal
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    //left diagonal
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==n-1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }

    cout << sum1+sum2-arr[1][1];
}