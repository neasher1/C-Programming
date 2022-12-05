#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;

    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("Not Exist");
    }
    else
    {
        printf("File is exist\n");

        printf("Enter your name : ");
        gets(name);

        printf("Enter your age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d\n",name,age);  //(file pointer,format specifier, variable name)

        printf("File is written");


        fclose(file);
    }



}
