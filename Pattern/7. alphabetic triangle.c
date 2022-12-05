#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",row+64);  // 65 = A ; col=1; 1+64=65;
        }
        printf("\n");
    }




}


