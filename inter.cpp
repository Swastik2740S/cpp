#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
int arr1[4]={0,9,3,4};
    int element;
    for(int i=0;i<5;i++)
    {
        element=arr[i];

        for(int j=0;j<4;j++)
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
