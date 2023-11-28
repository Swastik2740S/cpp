/*
Types of constructors
1. Default contructor
2. parameterized
3. Copy
4. Dynamic
*/
#include<iostream>
using namespace std;
class emp 
{
   int exp;
   float sal;
   public:
   emp(int exp, float)
   {
     this -> exp = exp;
     this -> sal = sal;
   }
   emp(emp & e1)
   {
    this -> exp = e1.exp;
    this -> sal=e1.sal;
   }
   void disp()
   {
    cout << "Emp exp=" << exp <<"sal= "<<sal <<endl;
   }
};

int main()
{
    emp e1(4,90000.00);
    emp e2=e1;
    cout << "Emp details:\n"; e1.disp();
    cout << "Emp details:\n"; e2.disp();
    return 0;
}