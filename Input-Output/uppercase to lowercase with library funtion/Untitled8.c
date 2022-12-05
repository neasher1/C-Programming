#include<stdio.h>
int main()
{

    char lower,upper;
    printf("Type any uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("The lowercase letter is : %c",lower);
    getch();


}
