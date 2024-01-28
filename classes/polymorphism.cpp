#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a, b;

    A operator-(A obj)
    {
        int value1 = obj.a = a--;
        int value2 = obj.b = b--;

        cout << value1;
        cout << value2;
    }
};

int main()
{
    A s1, s2;
    s1.a = 121;
    s1.b = 131;

    s2 - s1;
}