#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number : ");
    scanf("%d",&n);


    // lower to upper
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=2*row-1; col++)
        {
            printf("%c",col+64);
        }
        printf("\n");

    }

    // upper to lower
    for(row=n-1; row>=1; row--)
    {

        for(col=1; col<=n-row; col++)
        {
            printf(" ");  // print space
        }

        for(col=1; col<=2*row-1; col++)
        {
            printf("%c",col+64);   // print digit
        }
        printf("\n");

    }



}
