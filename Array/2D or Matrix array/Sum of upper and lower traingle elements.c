#include<stdio.h>
int main()
{
    int A[3][3],upperSum=0,lowerSum=0,i,j;
    printf("Enter the elements for A matrix : \n");

    //Taking input A matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Printing  A matrix
    printf("A = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Sum of Upper and lower triangle
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           if(i<j)
           {
               upperSum = upperSum + A[i][j];
           }
           if(i>j)
           {
               lowerSum = lowerSum + A[i][j];
           }
        }
    }

    printf("Sum of upper triangle elements = %d\n",upperSum);
    printf("Sum of lower triangle elements = %d\n",lowerSum);




}
