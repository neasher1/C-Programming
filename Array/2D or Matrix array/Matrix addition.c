#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,numberOfRows,numberOfCols;

    printf("Enter the elements of rows and columns : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    // Scanning A matrix
    printf("Please enter the elements for A matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // Scanning B matrix
    printf("\nPlease enter the elements for B matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    // Printing A matrix
    printf("A = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // printing B matrix
    printf("\nB = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    // Addition or sum A + B;
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // printing A+B
    printf("\nA+B = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        //printf("\t");
    }




}
