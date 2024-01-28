#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    string vow="aeiouAEIOU";
    int vowels=0;
    cout<<"enter the string: ";
    getline(cin,n);
    for(int i=0;n[i]!='\0';i++){
        for(int v=0;v<=vow.length();v++){
            if(n[i]==vow[v]){
                vowels++;
            }
        }
        cout << vowels;
       
    }
}