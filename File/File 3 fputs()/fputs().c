#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    file = fopen("test1.txt","a");

    if(file==NULL)
    {
        printf("Does not exist");
    }
    else
    {
        printf("File is Exist \n");
        printf("Enter Your Name : ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);

        printf("File is Written \n");

        fclose(file);
    }


    getch();



}
