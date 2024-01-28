#include <bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    // base case
    if (n == 0 || n==1)
    {
        return 1;
    }
    else{
    return n * fact(n - 1);
    }
}   

int sum_of_digits(int a)
{
    // base case
    if (a == 0)
    {
        return 0;
    }
    //logic
    return (a % 10 + sum_of_digits(a/10));
}

int main()
{
    long n;
    cout << "enter number";
    cin >> n;
    long long result =  fact(n);
    cout << n;
    int a;
    cout << "Enter number";
    cin >> a;
    cout << "Sum is:" << sum_of_digits(a) << endl;
}