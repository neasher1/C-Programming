#include<stdio.h>
int main()
{
    /*
        To write something in a file
        fputc();
        fputw();
        fputs();
        fprintf();
        fwrite();
    */

    FILE *file;   // File pointer
    char name[20] = " Hridoy";
    int length = strlen(name);   //calculate string length;
    int i;

    file = fopen("test.txt","w");  //a = Appending Mode(ager file er sathe add kora),  r = Reading Mode, w = Writing Mode


    if(file==NULL)
    {
        printf("File does not exist");

    }
    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {

            fputc(name[i],file);   //character type write in a file
        }
        printf("File is written successfully");
        fclose(file);
    }

    getch();


}
