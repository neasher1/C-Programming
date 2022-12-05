#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start,end,rem,temp,sum=0,fact,i,j;
    printf("Enter first numbers: ");
    scanf("%d",&start);

    printf("Enter last numbers: ");
    scanf("%d",&end);

    for(i=start; i<=end; i++)
    {

        temp = i;

        while(temp!=0)
        {
            rem = temp % 10;

            fact = 1;
            for(j=1; j<=rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum==i)
            printf("STRONG number = %d\n",i);

        sum = 0;
    }





}
