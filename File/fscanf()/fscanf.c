#include<stdio.h>
int main()
{
    FILE *file;
    char fname[30];
    char lname[30];
    int age;


    file = fopen("test.txt","r");

    if(file==NULL)
        printf("Not EXIST");
    else
    {
        printf("Yes!! EXIST\n");

        fscanf(file,"%s %s %d",&fname,&lname,&age);
        printf("%s %s %d \n",fname,lname,age);

        fclose(file);
    }



}
