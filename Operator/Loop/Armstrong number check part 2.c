#include<stdio.h>
int main()
{

    int initialValue,finalNum,i,temp,sum=0,rem;
    printf("Enter the initialValue : ");
    scanf("%d",&initialValue);

    printf("Enter the finalNum : ");
    scanf("%d",&finalNum);

    for(i=initialValue; i<=finalNum; i++)
    {

        temp = i;

        while(temp!=0)
        {

            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;

        }

        if(sum==i)
        {
            printf("Armstrong number = %d\n",i);
        }
        sum = 0;

    }


}
