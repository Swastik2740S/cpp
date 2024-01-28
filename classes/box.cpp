#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
    int length;
    int breadth;
    int heigth;
    public:
    Box()
    {
        length= 0 ;
        breadth =0;
        heigth = 0;
    }

    Box(int length,int breadth,int heigth)
    {
        this->length = length;
        this->breadth = breadth;
        this->heigth = heigth;
    }
    
    int getLenght()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return heigth;
    }
    long long CalculateVolume()
    {
        return length*breadth*heigth;
    }

    Box(Box &s)
    {
        length = &s.length;
        breadth =&s.breadth;
        heigth =&s.heigth;
    }

};

int main()
{
  int l,b,h;
  Box b1;
  cin>>l>>b>>h;
  Box b2(l,b,h);
  Box b3(b2);
  cout<<b1.getLenght()<<" "<<b1.getBreadth()<<" "<<b1.getHeight()<<" "<<b1.CalculateVolume()<<endl;
  cout<<b2.getLenght()<<" "<<b2.getBreadth()<<" "<<b2.getHeight()<<" "<<b2.CalculateVolume()<<endl;
  cout<<b3.getLenght()<<" "<<b3.getBreadth()<<" "<<b3.getHeight()<<" "<<b3.CalculateVolume();
  // Return 0 to indicate normal termination
  return 0;
}
