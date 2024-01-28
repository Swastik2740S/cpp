#include <bits/stdc++.h>
using namespace std;

void printf(int s, int n, int e)
{
    int a, b;

    for (int i = 1; i <= e; i++)
    {
        cout << s << " ";
        int temp = s;
        s = n;
        n = temp + n;
    }
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    printf(a, a + 1, b);
}