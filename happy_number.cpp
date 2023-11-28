#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, last_digit;
    int j = 0;

    cin >> n;
    int num = n;
    int arr[100] = {0};
    while (num != 1)
    {
        n = num;
        num = 0;
        while (n != 0)
        {
            last_digit = n % 10;
            num = pow(last_digit, 2) + num;
            n = n / 10;
        }
        if (num == 1)
        {
            cout << "Happy number";
            break;
        }

        for (int i = 0; arr[i] != 0; i++)
        {

            if (num == arr[i])
            {
                cout << "Not possible";
                num =1;
                break;
            }
        }
        arr[j++]=num;
    }

   

    return 0;
}