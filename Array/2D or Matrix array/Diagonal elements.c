#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;
    printf("Enter elements for A matrix : \n");
    //Taking input for A matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // Printing A matrix
    printf("\nA = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Diagonal Elements
    printf("\nDiagonal Elements = ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    printf("\nSum OF Diagonal = %d\n",sum);




}
