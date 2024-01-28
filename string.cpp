#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string n;
    cout << "Enter a string";
    getline(cin,n);
    string vow= {"aeiouAEIOU"};
    int vowels = 0;
    for(int i=0;n[i]!='\0';i++)
    {
        for(int v=0;v<=vow.length();v++)
        {
            if(n[i]==vow[v])
            {
                vowels++;
            }
        }
    }

    cout << vowels;
}