#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",row);   // row%2; col%2; row+64; col+96; *, #;
        }
        printf("\n");
    }



}
