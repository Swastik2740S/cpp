#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int min_idx=0;
    int max_idx=n-1;
    bool is_max=true;
    int result[n];
    for(int i=0;i<n;i++)
    {
        if(is_max)
        {
          result[i]=arr[max_idx];
          max_idx--;
        }
        else{
            result[i]=arr[min_idx];
            min_idx++;
        }
        is_max = !is_max;
    }
   

    for(int i=0;i<n;i++)
    {
        cout << result[i];
    }

}
