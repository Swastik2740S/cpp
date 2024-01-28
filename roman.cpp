#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int result=0;
    for(int i=0;i<str.length();i++)
    {
      if(str[i]=='l')
      {
        result++;
      }
      if(str[i]=='V')
      {
        result = result + 5;
      }
      if(str[i]=='X')
      {
        result = result + 10;
      }
      if(str[i]=='L')
      {
        result = result + 50;
      }
      if(str[i]=='C')
      {
        result = result + 100;
      }
      if(str[i]=='D')
      {
        result = result + 500;
      }
      if(str[i]=='M')
      {
        result = result +1000;
      }
    }

    cout << result;
}