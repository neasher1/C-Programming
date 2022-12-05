#include<stdio.h>
int main()
{

    int n,i,sum=0;
    printf("Enter the last number of serie : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        sum = sum + i;
    }

    printf("1 + 3 + 5 + ....+ %d = %d\n",n,sum);




}
