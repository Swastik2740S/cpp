#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
      
    }
}
void inputarray(int arr[],int a)
{
    for(int j=0;j<a;j++)
    {
        cin >> arr[j];
    }
}

int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
   
   inputarray(arr,n); 
   printarray(arr,n);
    return 0;
}