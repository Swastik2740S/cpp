#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
      
    }
}
void inputarray(int arr[],int a)
{
    for(int j=0;j<a;j++)
    {
        cin >> arr[j];
    }
}
//MAx number in an array!!!!!
int max(int arr[],int n)
{
    int max= INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
//Min numnber in an array!!!!!
int min(int arr[],int n)
{
    int min=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
   
   inputarray(arr,n); 
   printarray(arr,n);
   cout << "\n";
   cout << "Max number is:" <<max(arr,n) <<endl;
   cout << "Min number is:" <<min(arr,n)<<endl;
    return 0;
}