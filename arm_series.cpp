#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
    int temp = n;
    int ans = 0;
    while(n!=0)
    {
        int digits = n%10;
        ans = ans + pow(digits,3);
        n = n/10;
    }

    if(temp == ans)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int i=1;
    int n;
    cin >> n;
    int count = 0;
    while(count<n)
    {
        if(armstrong(i))
        {
          count++;
          cout << i <<" ";
        }
        i++;
    }
}