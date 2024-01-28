#include<bits/stdc++.h>
using namespace std;

class human{
    public:
    int age = 10;
    int height;
    int weight;

    public:
    int getage()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
        cout << w; 
    }
};

class male:public human{
    public:
    string color = "blue";

    void sleep()
    {
        cout << "Male sleeping " << endl;
    }
};

int main()
{
    male object1;
    cout << object1.age;
    cout << endl;
    object1.setweight(21);
    cout << endl;
    object1.sleep();
}