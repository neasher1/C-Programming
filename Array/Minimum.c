#include<stdio.h>
int main()
{
    int num[100],i,n;
    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Please enter %d number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int minimum = num[0];
    for(i=1; i<n; i++)
    {
        if(minimum > num[i])
            minimum = num[i];
    }
    printf("Minimum = %d",minimum);





}
