#include<iostream>
using namespace std;
bool search(int arr[],int n,int key)
{
   for(int i=0;i<n;i++)
   {
    if(arr[i]==key)
    {
        cout << "Index is:"<< i<<endl;
       return 1;
    } 
   }
   return 0;
}

int main()
{
    int arr[5]={1,-8,45,23,-90};
    int key ;
    cout << "Enter key:";
    cin >> key;

    bool found = search(arr,5,key);

    if(found)
    {
        cout << "Key found";
    }
    else{
        cout  << "not found";
    }
}