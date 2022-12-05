#include<stdio.h>
int main()
{

    int x,y;
    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    double result = pow(x,y);    // pow - power - library function;
    printf("Result is = %.2lf",result);


}
