#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("c:/Users/onamv/OneDrive/Documents/myfile.txt","w");
    printf("file is created");
    //write data into the file
    fprintf(fp,"chitkara uni");
    printf("The data written");
    fclose(fp);
    fp=fopen("c:/Users/onamv/OneDrive/Documents/myfile.txt","a");
    fprintf(fp,"\n chandigarh");
    fclose(fp);
    
    return 0;
}