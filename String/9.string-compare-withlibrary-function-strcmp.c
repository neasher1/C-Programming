#include<stdio.h>
int main()
{
    char str1[50] = "Neasher Ahmed";
    char str2[30] = "Neasher Ahmed";

    int output = strcmp(str1,str2);

    if(output==0)
        printf("They are equal");
    else
        printf("Not equal");

    getchar();
}
