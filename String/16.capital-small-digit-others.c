#include <stdio.h>
int main()
{
    char str[100],ch;
    int i,capital,small,digit,other;

    i=capital=small=digit,other=0;

    printf("Enter String: ");
    gets(str);

    while((ch = str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            capital++;
        else if(ch>=97 && ch<=122)
            small++;
        else if(ch>='0' && ch<='9')
            digit++;
            //or
            //else if(ch>=48 && ch<=57)
            //digit++;
            
        else
            other++;

        i++;
    }

    printf("Captial Numbers: %d\n",capital);
    printf("Small Numbers: %d\n",small);
    printf("Digit Numbers: %d\n",digit);
    printf("Others Numbers: %d\n",other);

    getchar();

}
