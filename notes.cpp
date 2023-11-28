#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int note;
    cout <<"Enter your amount:";
    cin >> n;
    switch(1)
    {
        case 1://for 100 rupee notes
        note = n/100;
        n = n-note*100;
        cout << "Number of notes of 100:"<<note<<endl;

        case 2://for 50 rupee notes
        note = n/50;
        n = n-note*50;
        cout << "Numer of notes of 50:"<<note<<endl;

        case 3://20 ruppe
        note = n/20;
        n = n-note*20;
        cout << "Number of notes of 20:"<<note<<endl;

        case 4:// 1 rupee note
        note = n/1;
        n = n-note*1;
        cout << "Number of notes of 1:"<<note<<endl;
}
    
    return 0;
}