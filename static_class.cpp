#include<iostream>
using namespace std;
class myclass{
   int a;
   public:
    void read()
    {
       cout << "Enter the value:\n"; 
       cin >>a;
    }
   friend void disp(myclass m);
};

void disp(myclass m)
{
    cout << "The value of a=" <<m.a;
}

int main(){
    myclass m; 
    m.read();
    disp(m);
    return 0;
}