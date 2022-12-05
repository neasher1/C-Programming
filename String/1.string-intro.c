#include<stdio.h>
int main()
{
    char s[7];

    s[0] = 'H';
    s[1] = 'r';
    s[2] = 'i';
    s[3] = 'd';
    s[4] = 'o';
    s[5] = 'y';
    s[6] = '\0';

    char s1[7] = {'H','r','i','d','o','y','\0'};
    char s2[] = "Hridoy Ahmed";

    printf("%s\n",s);
    printf("%s\n",s1);
    printf("%s",s2);


}
