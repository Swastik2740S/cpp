#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "size:"<<s.size()<<endl;
    cout << "Elements of the stack:\n";

    while(!s.empty())
    {
        cout << s.top() <<" ";
        s.pop();
    }
    cout << endl;
    stack<string> s1;
    s1.push("rohit");
    s1.push("virat");
    s1.push("shubham");
    while (!s1.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
}