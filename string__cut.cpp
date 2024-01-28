#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout << "Enter string:";
  char str[100];
  cin.getline(str,100);

  int i=1;
  for(i=1;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    {
      continue;
    }
    else if(str[i-1]==' ' || str[i+1]==' ' || str[i+1]=='\0')
    {
      continue;
    }
    else{
      str[i]='#';
    }
  }

  

  cout << str;
  return 0;
}