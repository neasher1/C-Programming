#include<stdio.h>
int main()
{

    char ch;
    printf("Enter any Letter = ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Small Letter");

    else if(ch>='A' && ch<='Z')
        printf("Capital Letter");

    else
        printf("Not a Letter");



}
