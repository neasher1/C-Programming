#include<stdio.h>
int main()
{
    int A[3][4],i,j,row,col;

    printf("Enter the numbers for row and columns: ");
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }




}
