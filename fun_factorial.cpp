#include<iostream>
using namespace std;
int fact(int a)
{
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans = ans*i;
    }
    return ans;
}
int nCr(int n, int r)
{
   int num= fact(n);
   int deno= fact(r) * fact(n-r);
   return num/deno;
}
int main()
{
    int o,p;
    cout << "Enter value of n:";
    cin >> o;
    cout << "Enter value of r:";
    cin >> p;
    if(o<=p)
    {
        cout<<"Inavlid";
    }
    else{
        int final=nCr(o,p);
        cout << "Answer is:"<<final;
    }
    return 0;
}