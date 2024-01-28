#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num1;
    cin >> num1;
    string num2;
    cin >> num2;
    int temp1 = 0;
    int temp2 = 0;
    for(int i=0;i<num1.length();i++)
    {
       temp1 = temp1 * 10 + (num1[i]-'0');
    }
    for(int i=0;i<num2.length();i++)
    {
       temp2 = temp2 * 10 + (num2[i]-'0');
    }

    cout << temp1 + temp2;

    
}