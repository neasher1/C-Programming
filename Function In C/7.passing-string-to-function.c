#include <stdio.h>

void display(char s[], char s2[]){

    int i=0, len=0,j;

    while(s[i]!='\0'){

        printf("%c\n",s[i]);
        i++;
        len++;

    }
    printf("Length = %d",len);

    for(j=0, i=len-1; i>=0; i--, j++){

        s2[j] = s[i];

    }
    s2[j] = '\0';

     return s2;

}

int main()
{
    char str[30] = "Neasher";
    char str2[30];
    display(str,str2);

    printf("\nReverse String: %s",str2);


}


