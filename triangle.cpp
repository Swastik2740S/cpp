#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int s=n-i;
        while(s)
        {
            cout << " ";
            s=s-1;
        }
        int j=1;
        while(j<=i)
        {
            cout << j;
            j=j+1;
        }
        int k=i-1;
        while(k)
        {
            cout << k;
            k=k-1;
        }
        cout << endl;
        i=i+1;
        
    }
    return 0;
}