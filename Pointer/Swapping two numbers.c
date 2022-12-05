#include<stdio.h>
int main()
{
    int x=10,y=20,temp;

    int *ptr1,*ptr2;

    ptr1 = &x;
    ptr2 = &y;

    //Swapping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    //END Swap

    printf("X = %d\n",x);
    printf("Y = %d",y);



}
