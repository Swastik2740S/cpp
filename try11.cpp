#include<iostream>
using namespace std;
class std1
{
   //data members
   public:
       int rno;
       string name;
       int m1,m2,m3;
   //methods
   public:
       void read()
       {
        cout <<"Enter the name rollno and marks(3 times) \n";
        cin >> name >> rno >> m1 >> m2 >> m3;
       }
       void disp()
       {
        cout << "The name is :" << name << endl;
        cout << "The rno is:" << rno << endl;
        cout << "The marks of 1st:" << m1<<endl;
        cout << "The marks of 2nd:" << m2<<endl;
        cout << "The marks of 3rd:" << m3<<endl;
        }
        void avg()
        {
            float n;
            n= m1+m2+m3/3;
            cout << "Avg is:\n" <<n;
        }
};

int main()
{
    std1 s1,s2,s3;
    s1.read();
    s1.disp();
    s1.avg();
    s2.read();
    s2.disp();
    s2.avg();
    s3.read();
    s3.disp();
    s3.avg();
    return 0;

}