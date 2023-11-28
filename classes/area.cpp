#include<bits/stdc++.h>
using namespace std;

class area{
    public:
    int lenght;
    int breath;

    void input()
    {
        cin >> lenght;
        cin >> breath;
    }

    void printarea()
    {
        int area = lenght * breath;
        cout << "Area of rectangle is:" <<area;
    }
};

int main()
{
    area *a = new area;  //dynamic allocation
    a->input();
    a->printarea();
}