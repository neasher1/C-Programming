#include<stdio.h>
int main()
{
    char str1[30] = "madam";
    char str2[30];
    int i=0, len=0,j;

    while(str1[i]!='\0'){
        i++;
        len++;
    }

    printf("String1 length = %d\n",len);

    for(j=0, i=len-1; i>=0; i--, j++){
        str2[j] = str1[i];
    }

    str2[j] = '\0';

    printf("Original String = %s\n",str1);
    printf("Reverse = %s\n",str2);

    int d = strcmp(str1,str2);

    if(d==0)
        printf("String is Palindorme");
    else
        printf("String is not palindorme");

    getchar();
}
