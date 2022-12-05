#include<stdio.h>
int main()
{
    int A[3][4];  //declare;
    int row,col;

    for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("A[%d][%d] = ",row,col);
            scanf("%d",&A[row][col]);   // initialization;
        }
        printf("\n");
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d ",A[row][col]);  // printing;
        }
        printf("\n");
    }




}
