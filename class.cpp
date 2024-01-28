#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int absent = 0;
    int leave = 0;
    int present=0;
    for(int i=0;i<=str.length();i++)
    {
       if(str[i]=='P')
       {
        present++;
       }
       if(str[i]=='A')
       {
        absent++;
       }
       if(str[i]=='L')
       {
        leave++;
       }
    }

    if(absent>=2 || leave>=3)
    {
        cout << "false";
    }
    else{
        cout << "True";
    }
}