#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],i,j,row1,col1,row2,col2;

    printf("Enter rows and column for First matrix = ");
    scanf("%d %d",&row1,&col1);

    printf("Enter rows and column for second matrix = ");
    scanf("%d %d",&row2,&col2);

    while(col1!=row2)
    {
        printf("Error! Column of first matrix not equal to row of second matrix\n\n");

        printf("Enter rows and column for First matrix = ");
        scanf("%d %d",&row1,&col1);

        printf("Enter rows and column for second matrix = ");
        scanf("%d %d",&row2,&col2);
    }

    // Taking input of first matrix :
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    // Taking input of Second matrix :
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("Second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    //Printing of first matrix :
    printf("\n\nFirst = ");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    //Printing of Second matrix :
    printf("\n\nSecond = ");
    for(i=0; i<row2; i++)
    {
        printf("\t");
        for(j=0; j<col2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
        printf("\t");
    }




}
