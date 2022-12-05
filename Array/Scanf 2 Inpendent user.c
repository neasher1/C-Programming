#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;

    printf("How many numbers that you want : ");
    scanf("%d",&n);

    printf("Please enter %d number : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is : %d\n",sum);
    printf("Average = %.2f\n",(float)sum/n);




}
