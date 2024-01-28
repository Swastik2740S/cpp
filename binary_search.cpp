#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);

    int s = 0;
    int e = n - 1;
    int mid;

    int key;
    cout << "Enter element:";
    cin >> key;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return 0; 
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << "Element not found." << endl;

    return 0;
}
