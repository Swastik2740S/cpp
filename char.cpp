#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[20]={'c','+','+'};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n <<endl;
    int c=0;
    // for(int i=0;arr[i]!=0;i++)
    // {
 
    //     c++;
    // }
    // cout << c;
   reverse(arr,arr+n);

   for(int i=0;i<n;i++)
   {
    cout << arr[i];
   }
   cout << endl;
   int i= n-1;
   

return 0;
}