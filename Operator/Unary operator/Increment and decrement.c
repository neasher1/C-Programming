#include<stdio.h>
int main()
{

    int x = 10;

    printf("%d\n",x++);  // x= 10  post  increment
    printf("%d\n",++x);  // x = 12
    printf("%d\n",x);   // x= 12
    printf("%d\n",x--);  // x = 12  pre decremrnt
    printf("%d\n",--x);   // 10
    printf("%d\n",++x);  // 11
    printf("%d\n",x--);  // 11
    printf("%d\n",--x); //10
    printf("%d\n",x); //10



}
