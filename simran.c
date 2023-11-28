#include<stdio.h>
#include<string.h>
int main(){
    char n[10];
    printf("enter your string:");
    scanf("%[^\n]s",&n);
    if(strlen(n)%2==0){
        printf("brackets are balanced");
    }
    else{
        printf("not balanced");
    }
}