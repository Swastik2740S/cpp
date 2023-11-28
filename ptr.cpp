#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int *const ptr=&a;
    cout << *ptr;
    *ptr=50;
    cout<<*ptr;
    return 0;
}