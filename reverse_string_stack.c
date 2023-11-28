#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int top=-1;
int count=0;
char inarr[max];
char outarr[max];

void push(char s)
{
    if(top==max-1)
    {
        printf("Stack is full");
    }
    else{
        top++;
        inarr[top]=s;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Underflow");

    }
    else{
        outarr[count]=inarr[top];
        top--;
        count++;
    }
}

int main()
{
    char str[max];
    printf("Enter any string:");
    scanf("%[^\n]s",&str);

    for(int i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    for(int i=0;i<strlen(str);i++)
    {
        pop();
    }
    for(int i=0;i<strlen(str);i++)
    {
        printf("%c",outarr[i]);
    }
    return 0;
}