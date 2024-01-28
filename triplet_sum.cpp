#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 5, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 13;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int s = j + 1; s < n; s++)
            {
                if (arr[i] + arr[j] + arr[s] == k)
                {
                    cout << arr[i] << arr[j] << arr[s] <<endl;
                }
            }
        }
    }
}