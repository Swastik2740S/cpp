#include<iostream>
using namespace std;

int eo(int a)
{
   
    if(a%2==0)
    {
        cout << "Even number";

    }
    else{
        cout << "Odd number";
    }
}
int main()
{
    int n;
    cout << "Enter your number:";
    cin >> n; 
    eo(n);
    return 0;
}