#include<stdio.h>
int main()
{
    char str1[50] = "My Name is ";
    char str2[30] = "Neasher Ahmed";

    int i=0,j=0,len=0,len1=0;

    while(str1[i]!='\0'){
        i++;
        len++;
    }
    printf("First String length is : %d\n\n",len);

    while(str2[j]!='\0'){
        str1[len+j] = str2[j];
        j++;
    }

    printf("%s",str1);

    getchar();
}
