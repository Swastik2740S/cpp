#include<bits/stdc++.h>
using namespace std;

class hero{
   public:
   char name;
   int roll;
  void print()
  {
    cout << name <<endl;
    cout << roll;
  }
};

int main()
{
    hero h1;
    cout << sizeof(h1);
}