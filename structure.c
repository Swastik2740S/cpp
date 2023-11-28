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
  printf("Enter roll no=");
  scanf("%d",&s.roll);
  printf("\n");
  printf("Enter your name:");
  scanf("%s",&s.name);
  printf("\n");
  printf("Emter cgpa=");
  scanf("%f",&s.cgpa);

  printf("%d\n",s.roll);
  printf("%s\n",s.name);
  printf("%f\n",s.cgpa);

  printf("Enter 2 roll:");
  scanf("%d",&s.roll);

  printf("%d",s.roll);



      

 }
