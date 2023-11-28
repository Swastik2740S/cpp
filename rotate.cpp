
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout << "Enter test case";
    cin >> t;
    for(int i=0;i<t;i++)
    {
    int final[100] = {0};

    int arr[100];
    cout << "Enter size";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp;
    cout << "Enter position to rotate";
    int k;
    cin >> k;
    for (int i = 0; i < k + 1; i++)
    {
        for (int i = 0; i < n; i++)
        {
            temp = arr[i];
            arr[i] = arr[n - 1];
            arr[n - 1] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    }

}