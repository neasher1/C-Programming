#include<stdio.h>
int main()
{
    int n,num[100],i;
    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Please enter %d number : ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int max = num[0];
    for(i=1; i<n; i++)
    {
        if(max < num[i])
            max = num[i];
    }
    printf("Maximum = %d",max);




}
