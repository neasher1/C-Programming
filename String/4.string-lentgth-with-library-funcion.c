#include<stdio.h>
int main()
{
    char s[30];

    printf("Enter Name: ");
    gets(s);

    int length = strlen(s);

    printf("Length = %d",length);

}
