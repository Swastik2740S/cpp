#include<iostream>
using namespace std;
class cube
{
    int l,b,w;
    public:
    void read()
    {
     cout <<"Enter the lenght:";
     cin >> l;
     cout << "Enter the breath:";
     cin >> b;
     cout << "Enter the height";
     cin >> w;
    }
    void disp()
    {
        cout << "lenght is:"<<l;
        cout << "Breath is"<<b;
        cout << "Height is:"<<w;
    }
    friend void calvol(cube);
};

void calvol(cube c)
{
    cout << "Value is:" << c.l*c.b*c.w;
}