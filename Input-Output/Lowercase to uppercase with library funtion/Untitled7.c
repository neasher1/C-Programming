#include<stdio.h>
int main()
{

    char lower,upper;
    printf("Type any lower-case letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The uppercase letter is : %c",upper);
    return 0;


}
