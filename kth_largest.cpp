#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort code
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // kth largest element
    int k;
    cout << "Enter kth largest element:";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cout << arr[n - k];
        break;
    }

    cout << endl;

    // output array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}