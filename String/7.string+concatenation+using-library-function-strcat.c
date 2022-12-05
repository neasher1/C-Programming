#include<stdio.h>
int main()
{
    char str1[30] = "My Name is ";
    char str2[30] = "Neasher Ahmed";

    char str3[30] = "Hriody";

    strcat(str1,str2);
    strcat(str3, "Khan");

    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);
    printf("Str3 = %s\n",str3);
}
