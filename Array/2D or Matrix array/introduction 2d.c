#include<stdio.h>
int main()
{
    int A[3][4] = { {5,6,7,8},{15,25,35,45},{55,75,85,95} };   //declare & initilization
    int row,col;

        //printing
    for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }




}
