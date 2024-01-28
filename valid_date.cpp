#include<bits/stdc++.h>
using namespace std;

class valid_date{
  private:
  int day,month,year;
  public:
  valid_date(int d,int m,int y):day(d),month(m),year(y){}
  void date(int d,int m,int y)
  {
    day = d;
    month = m;
    year = y;
  }
  int getday()
  {
    return day;
  }
  int getmonth()
  {
    return month;
  }
  int getyear()
  {
    return year;
  }

bool isvalid()
{
    if(month<1 || month>12)
    {
        return false;
    }
    if(day<1 || day>31)
    {
        return false;
    }
    if(month==4 || month==6 || month==9 || month==11 && day>30)
    {
        return false;
    }
    if(year%4==0 && year%100!=0 || year%100==0)
    {
        if(day>29)
        {
            return false;
        }
    }
    return true;
}
};

int main()
{
    valid_date date(0,0,0);
    int day,month,year;
    cin >> day;
    cin >> month;
    cin >> year;
    date.date(day,month,year);
    cout << date.getday()<<"/"<<date.getmonth()<<"/"<<date.getyear();
    cout << endl;
    if(date.isvalid())
    {
        cout << "valid date";
    }
    else{
        cout << "Not a valid date";
    }
}