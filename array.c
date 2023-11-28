#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    int salary;
};
int main()
{
    int n;
    struct employee e[5];
    printf("Enter records of 5 students:");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter id:");
        scanf("%d",&e[i].id);
        printf("Enter name");
        scanf("%s",&e[i].name);
        printf("Enter salary:");
        scanf("%d",&e[i].salary);

    }
    for(i=0;i<=n;i++)
    {
        printf("%d\n",e[i].id);
        printf("%d\n",e[i].name);
        printf("%d\n",e[i].salary);
    }

    return 0;
}