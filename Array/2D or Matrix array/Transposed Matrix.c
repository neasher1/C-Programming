#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],i,j,numberOfRows,numberOfCols;

    printf("Enter rows and column for A matrix : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    // Taking input for A matrix
    printf("\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Transpose Matrix Set
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    // Printing A matrix
    printf("\n\nA = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Printing Transpose
    printf("\n\nTranspose = ");
    for(i=0; i<numberOfCols; i++)
    {
        printf("\t");
        for(j=0; j<numberOfRows; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
        printf("\t");
    }




}
