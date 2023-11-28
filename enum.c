#include<stdio.h>
enum week_days{sunday,monday,tuesday};

int main()
{
    enum week_days today;
    today=sunday;
    printf("%c",today);
}