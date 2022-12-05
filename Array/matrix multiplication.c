#include<stdio.h>
int main()
{
    int num[100],n,i,result=1;
    printf("How many numbers that you want : ");
    scanf("%d",&n);

    printf("Enter %d number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++)
    {
        result= result * num[i];
    }
    printf("Addition = %d",result);





}
