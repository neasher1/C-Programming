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

            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    fprintf(foutput,"%d  ",matrix[i][j]+1);
                }
                fprintf(foutput,"\n");
            }

        }



        fclose(finput);
        fclose(foutput);

    }

    getchar();


}

