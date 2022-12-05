#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age,phnNo,num,i;

    file = fopen("test.txt","a");

    if(file==NULL)
        printf("Does not exist");

    else
    {
        printf("File is Opened\n");

        printf("Enter how many student details ...");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("Enter First Name : ");
            scanf("%s",&name);

            printf("Enter Your Age : ");
            scanf("%d",&age);

            printf("Enter Phn Number : ");
            scanf("%d",&phnNo);

            fprintf(file,"\n%s\t\t%d\t\t%d",name,age,phnNo);
        }
        printf("\nFile is created");

        fclose(file);
    }




}
