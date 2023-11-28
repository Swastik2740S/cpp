#include<iostream>
using namespace std;
struct student 
{
   int id;
   char name[10];
   int salary; 
};

int main()
{
    int n;
    cin >> n;
    struct student s[n];
    for(int i=0;i<=n;i++)
    {
        cout << "Enter id";
        cin >> s[i].id;
        cout << "Enter name";
        cin >> s[i].name;
        cout << "Enter salary";
        cin >> s[i].salary;
    }
    for(int i=0;i<=n;i++)
    {
        cout << s[i].id <<endl;
        cout << s[i].name<<endl;
        cout << s[i].salary<<endl;
    }

    return 0;
}