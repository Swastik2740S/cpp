#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    char name;
    int roll = 10;
    int height;

    public:
    int getroll()
    {
        return this->roll;
    }

};

int main()
{
    hero a;
    cout << a.getroll();
}
