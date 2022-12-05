#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file;
    char ch;

    file = fopen("Test2.txt","r");

    if(file==NULL)
    {
        printf("File is not exist");
    }
    else
    {
        printf("FIle is Opened\n");

        while(!feof(file)){

            ch = fgetc(file);
            printf("%c",ch);

        }

        fclose(file);
    }

    getchar();


}
