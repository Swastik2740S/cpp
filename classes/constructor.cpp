#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;

    hero()
    {
        cout << "contructor called";
    }

    hero(int health)
    {
        this -> health = health;
        cout << health;
    }
};

int main()
{
    hero h1(10);
 
}