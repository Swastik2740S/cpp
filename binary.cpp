#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans=0;
    int i=0;
    int count =0;
    while(n!=0)
    {
        int bit=n&1;
        if(bit ==1)
        {
            count++;
        }
        ans=(bit*pow(10,i)+ans);
        n=n>>1;
        i++;
    }
    
    cout << "Answer is:" <<ans+1<<endl;
    cout << count;
}
