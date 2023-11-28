#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,40,5};
    int max , max1;
    max = max1 =INT8_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max1=max;
            max=arr[i];
        }
      
    }
    cout << "second largest is:"<<max1;

}