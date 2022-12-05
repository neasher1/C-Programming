#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }

        //printing number
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);  //row,col%2;row%2;col+64;row+96,*,#;

        }
        printf("\n");



    }




}
