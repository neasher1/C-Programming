#include<stdio.h>
int main()
{

    int n,i,result=1;
    printf("Enter the last number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result = result * (i*i);

        if(i==1)
            printf("\n1^2 X ");
        else if(i==n)
            printf("%d^2",i);

        else
            printf("%d^2 X ",i);
    }

    printf(" = %d",result);


}
