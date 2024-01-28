#include<iostream>
#include<math.h>
////////////////////////////////////////////not working in vs code only 10 and above/////////////////////////////////////////////
using namespace std;
int main()
{
    int n;
    cout << "Enter your number:";
    cin >> n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
       int rem=n&1;
       ans=(rem * pow(10,i)+ ans);
       n=n>>1;
       i++;
    }
    cout << ans;
    return 0;
}