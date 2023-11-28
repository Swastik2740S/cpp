#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int *c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int n,m;
    cout << "Enter:";
    cin >> n;
    cout << "Enter:";
    cin >> m;
    swap(n,m);

    cout << n <<"\t" << m;
}