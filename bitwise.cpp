#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    
    cout << "a&b="<< (a&b)<<endl ;
    cout << "a|b="<< (a|b) << endl;
    cout << "a^b="<< (a^b) <<endl;
    cout << "a~b="<< (~a) <<endl;

    //l shift
    cout << (17<<1)<<endl;
    cout << (17<<2)<<endl;
    //r shift
    cout << (17>>2)<<endl;
    cout << (21>>2)<<endl;


    return 0;
}