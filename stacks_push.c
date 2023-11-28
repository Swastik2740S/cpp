#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack [N];
int top=-1;

void push(int x)
{
    if(top==N-1)
    {
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow");
    }
    else{
        item=stack[top];
        top--;
        printf("%d",item);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        printf("%d",stack[top+1]);
    }
}

void display()
{
    for(int i=top+1;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
int main()
{
    int x;
    for(int i=0;i<N;i++)
    {
    printf("Enter your element:");
    scanf("%d",&x);
    push(x);
    }

    for(int i=0;i<N;i++)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
    printf("Poped element is:");
    pop();

    printf("\n");
    printf("Peek eleement is:");
    peek();
    printf("\n");
    printf("Treversed array is:");
    display();
}