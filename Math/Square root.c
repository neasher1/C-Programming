#include<stdio.h>
int main()
{

    int x;
    double result;
    printf("Enter any numbers = ");
    scanf("%d",&x);

    result = sqrt(x);   // sqrt - library function;

    printf("Sqrt = %.2lf",result);


}
