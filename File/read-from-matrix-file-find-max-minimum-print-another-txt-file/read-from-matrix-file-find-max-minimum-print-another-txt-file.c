#include <stdio.h>
int main()
{

    int matrix[4][4];
    FILE *finput, *foutput;

    finput = fopen("input.txt","r");
    foutput = fopen("output.txt","w");

    if(finput==NULL)
    {
        printf("File is not found\n, Error....");
        exit(1);
    }

    else
    {

        printf("File is Opened");

        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                fscanf(finput,"%d",&matrix[i][j]);
            }
            printf("\n");
        }

        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                printf("%d  ",matrix[i][j]);
            }
            printf("\n");
        }



        if(foutput==NULL)
        {
            printf("File is not found\n, Error....");
            exit(1);
        }
        else
        {
            printf("\nOutput file is created succusfully, check the output file");

            fprintf(foutput,"Maximum Number list for each row:\n");

            int max = matrix[0][0];
            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(max<matrix[i][j])
                    {
                        max = matrix[i][j];
                    }
                }
                fprintf(foutput,"%d ",max);
                fprintf(foutput,"\n");
            }

            fprintf(foutput,"\nMinimum Number list for each row:\n");

            for(int i=0; i<4; i++)
            {
                int minimum = matrix[i][0];

                for(int j=0; j<4; j++)
                {
                    if(minimum>matrix[i][j])
                    {
                        minimum = matrix[i][j];
                    }
                }
                fprintf(foutput,"%d ",minimum);
                fprintf(foutput,"\n");
            }

            fprintf(foutput,"\nFind the one Maximum Number for all rows and columns \n");

            int max1 = matrix[0][0];
            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(max1<matrix[i][j])
                    {
                        max1 = matrix[i][j];
                    }
                }
            }
                fprintf(foutput,"%d ",max1);

        }



        fclose(finput);
        fclose(foutput);

    }

    getchar();


}
