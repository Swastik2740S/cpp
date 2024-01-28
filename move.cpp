#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string a;
    getline(cin,a);

    int move1=0;
    int move2=0;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='u')
        {
            move1++;
        }
        else if(a[i]=='d')
        {
            move1--;
        }
        if(a[i]=='r')
        {
            move2++;
        }
        else if(a[i]=='l')
        {
            move2--;
        }
    }


    cout << move2<<move1;    
}