#include<iostream>
#include<vector>
#include<bits/stdc++.h>



using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<" ";
    cin>>n;
    vector<int> dev(n,9);
    for(int i=0;i<n;i++)
    {   
            cin>>dev[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<dev[i]<<" ";
    }
    cout<<endl;

    sort(dev.begin(),dev.end());
    
    for(int i=0;i<n;i++)
    {
        cout<<dev[i]<<" ";
    }
    return 0;
    

}