#include<iostream>
using namespace std;
int main()
{
    int n,product=1,sum=0;
    cout<<"Enter your number";
    cin>> n;
    while(n!=0)
    {
        int digit=n%10;
        product=digit*product;
        sum=digit+sum;
        n=n/10;
    }
    cout<<product-sum;
    return 0;
}