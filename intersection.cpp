#include<iostream>
using namespace std;
void inputarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
}
void find(int arr[],int arr1[],int n,int m)
{
    int element;
    for(int i=0;i<n;i++)
    {
        element=arr[i];

        for(int j=0;j<m;j++)
        {
            if(element == arr1[j])
            {
                cout << arr1[j];
                arr1[j]=-11123;
                break;
            }
        }
    }

}

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n];
    int arr1[m];
    inputarray(arr,n);
    inputarray(arr1,m);

    find(arr,arr1,n,m);
}