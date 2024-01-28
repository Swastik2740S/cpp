#include<bits/stdc++.h>
using namespace std;


class student
{
    public:
    int rno;
    string name;
    student(int rno,string name)
    {
        this->rno = rno;
        this->name = name;
    }
};

int main()
{
    stack<student> st;
    st.push(student(882,"swastik"));
    st.push(student(907,"tanya"));
    st.push(student(852,"seerat"));

    while(!st.empty())
    {
        cout << st.top().rno << " " <<st.top().name;
        cout << endl;
        st.pop();
    }
}