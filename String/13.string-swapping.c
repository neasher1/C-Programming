#include<stdio.h>
int main()
{
    char str1[30], str2[30], temp[30];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter Swapping: \n");
    printf("String1 = %s\n",str1);
    printf("String2 = %s\n",str2);

    getchar();
}
