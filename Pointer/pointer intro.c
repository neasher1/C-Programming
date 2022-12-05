#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("Value of X = %d\n",x);
    printf("Address of X = %u\n",&x);
    printf("Address of pointer = %d\n",ptr);
    printf("Content of pointer = %d\n",*ptr);
    printf("Address of variable = %d\n",&ptr);



}
