#include<stdio.h>
int main()
{

    int n,i;
    printf("Enter last number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d ",i);   // 1 2 3 4 5 6....
        printf(" \n");
    }

    for(i=2; i<=n; i=i+2)
    {
        printf("%d \n",i);   // 2 4 6 8 ....
    }

    for (i=1; i<=n; i=i+2)
    {
        printf("%d \n",i);   // 1 3 5 7 9....
    }



}
