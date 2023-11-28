#include<stdio.h>
#include<string.h>
 
 struct student
 {
    int roll;
    char name[10];
    float cgpa; 
 };

 int main()
 {
  struct student s;
  struct student *ptr=&s;
  scanf("%d",&s.roll);

  printf("roll is:%d",ptr->roll);

 }
