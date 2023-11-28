#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
    int number = 10;

public:
    char level;
    hero(int health,char level)
    {
       this->health = health;
       this->level = level;
       
    }
    int health;
    void input()
    {
        cin >> health;
    }
    void print()
    {
        cout << health;
        cout << level;
    }
    int getnumber()
    {
        return number;
    }
    void setnumber(int a)
    {
        number = a;
    }
};

int main()
{

   hero s(100,'a');
   s.print();
   cout << endl;
   hero r(s);
   r.print();


  /*  //static allocation
    hero h1; // object
    h1.setnumber(70);
    cout << h1.getnumber(); */

   /* //dynamic allocation
    hero *b = new hero;
    b->setnumber(100);
    cout << b->getnumber(); */
}