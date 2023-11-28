#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    int a=n;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout << j;

            
            j=j+1;
        }
        int s=i+i-2;
        while(s>0)
        {
            cout << "*";
            s=s-1;
        }
         int k=1;
        while(k<=n-i+1)
        {
            
            cout << a-k+1;
            k=k+1;
        }
        

        cout << endl;
        i=i+1;
    }
    return 0;
}