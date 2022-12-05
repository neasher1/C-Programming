#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],i,j,r1,c1,r2,c2,k,sum=0;

    printf("Enter rows and column for First matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for Second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error! First matrix Column is not equal to second matrix row\n");

        printf("Enter rows and column for First matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for Second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    // Taking input for First matrix
    printf("\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    // Taking input for Second matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }


    //Multiplication table set
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }


    //Printing A matrix
    printf("\nFirst = ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    //Printing B matrix
    printf("\nSecond = ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    // Printing Multiplication
    printf("\nResult = ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
           printf("%d ",result[i][j]);
        }
        printf("\n");
        printf("\t");
    }





}
