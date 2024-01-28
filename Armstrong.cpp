#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    int m = n;
    int check = n;
    while (m != 0)
    {
        c++;
        m = m / 10;
    }

    int ans = 0;
    while (n != 0)
    {
        int digits = n % 10;
        ans = ans + pow(digits, c);
        n = n / 10;
    }

    if (ans == check)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not";
    }
    cout << endl;
    cout << ans;
}