#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int rev=0;
    while(n!=0)
    {
        int digit = n % 10;                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << rev;

    if(original == rev)
    {
        cout << "palindrome";
    }
}
   
