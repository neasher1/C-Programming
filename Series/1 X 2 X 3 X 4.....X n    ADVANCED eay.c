#include<stdio.h>
int main()
{

    int n,i,result=1;
    printf("Enter the last number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result = result * i;

        if(i==1)
            printf("\n1 X ");

        else if(i==n)
            printf(" %d ",i);

        else
            printf(" %d X",i);
    }

    printf(" = %d\n",result);


}
