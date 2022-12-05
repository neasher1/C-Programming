#include<stdio.h>
int main()
{

    float i,n,sum = 0;
    printf("Enter last number : ");
    scanf("%f",&n);

    for(i=1.5; i<=n; i++)
    {
        printf(" %.1f",i);
        sum = sum + i;
    }

    printf("\nsum = %.1f\n",sum);



/*
        float n,sum = 0,a=1.5;
    printf("Enter last number : ");
    scanf("%f",&n);

    while(a<=n)
    {
        printf(" %.1f ",a);
        sum = sum + a;
        a = a + 1;

    }

    printf("\nsum = %.1f\n",sum);
    */





}
