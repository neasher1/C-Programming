#include<stdio.h>
int main()
{
    char s1[] = "NEASHER AHMED";

    int i=0;

    while(s1[i]!='\0')
    {
        printf(" %c\n",s1[i]);
        i++;
    }


}


//geting input
#include<stdio.h>
int main()
{
    char s[30];
    int i=0;

    printf("Enter your Name: ");
    gets(s);

    printf("The charchter is: \n");
    while(s[i]!='\0'){
        printf("%c\n",s[i]);
        i++;
    }


}

