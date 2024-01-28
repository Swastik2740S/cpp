#include<bits/stdc++.h>
using namespace std;
int setbit(int n,int i)
{
    return  n | (1<<i);
}

int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    int i;
    cout << "Enter i th position ";
    cin >> i;

    cout << setbit(n,i);
}