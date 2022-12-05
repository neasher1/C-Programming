#include<stdio.h>
int main()
{
    //char s[]="Neasher Ahmed";
    char s[30];
    printf("Enter your name: ");
    gets(s);

    int i=0, count=0;

    while(s[i]!='\0'){
        count++;
        i++;
    }

    printf("Length is = %d",count);

}

