#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number:";
    cin >> n;
    int a=(-n);

    int ans = 0;
    int i = 0;
    while(i<32){
        int bit = a&1; 
        ans = (bit * pow(10,i)) + ans;
        a = a >> 1;
        i++;
    }
    cout << ans <<endl;
    int final= (~ans);
    cout << ans <<endl;
    int f= ans+1;
    cout << f;
    return 0;
}