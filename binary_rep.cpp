#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if((n&1)==1)
    {
        return 1 + count(n>>1);
    }
    else{
       return count(n>>1);
    }
}
int main()
{
  int n;
  cin >> n;
  cout << count(n);
}