#include <stdio.h>
int main()
{
    char str1[30], str2[30];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strupr(str1);
    strlwr(str2);
}
