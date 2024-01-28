#include<bits/stdc++.h>
using namespace std;
class chkNumber{
    public:
    double value;
    chkNumber(double n)
    {
       value = n;
       if(value > 0)
       {
        cout << "positive number";
       }
       else if(value < 0)
       {
        cout << "negative number";
       }
       else
       {
        cout << "neutral";
       }
    }
};

int main()
{
    double n;
    cin >> n;
    chkNumber c(n);
}