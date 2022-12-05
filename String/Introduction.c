/*
    String holo character type array,er format specifier S.
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter ch = ");
    scanf("%c",&ch);
    if(ch=='a')
        printf("small");
    else if(ch=='A')
        printf("Cap");
}
