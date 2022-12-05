#include<stdio.h>
int main()
{

    int n,sum=0,a=1;
    printf("Enter last number = ");
    scanf("%d",&n);

    while(a<=n)
    {

        sum = sum + a*a;
        a = a + 1;

    }

    printf("1^2 + 2^2 + 3^2 +...+ %d^2 = %d",n,sum);


}
