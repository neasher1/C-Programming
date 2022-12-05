#include<stdio.h>
int main()
{

    double n,i,sum=0;
    printf("Enter last number : ");
    scanf("%lf",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + (1/i);
    }

    printf(" = %.2lf",sum);



}
