#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(char word[],int start,int end)
{
    while(start<end)
    {
    if(word[start]!=word[end])
    {
        //not palindrome
        return false;
        start ++;
        end--;
    }
    return true;
    }

}
int main()
{
    char word[100];
    cin.getline(word,100);
    checkpalindrome(word,0,strlen(word)-1);
}

