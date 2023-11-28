#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (ch[i] == '[' || ch[i] == '(' || ch[i] == '{')
        {
            c++;
        }
        else if (ch[i] == ']' || ch[i] == ')' || ch[i] == '{')
        {
            c--;
        }
    }

   if (n % 2 != 0)
    {
        cout << "False";
        n = 0;
    }
    else if (ch[0] == ')' || ch[0] == '}' || ch[0] == ']')
    {
        cout << "False";
    }
    else if (c == 0)
    {
            cout << "True";
    }
    else
    {
        cout << "false";
    }
}