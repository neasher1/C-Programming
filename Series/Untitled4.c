#include<stdio.h>
int main()
{

    int n,sum=0,i;
    printf("Enter num : ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+3)
    {
        printf(" %d",i);   // 2 + 5 + 8 =
        sum = sum + i;
    }

    printf("\nsum = %d",sum);


}
