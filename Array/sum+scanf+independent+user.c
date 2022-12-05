#include<stdio.h>
int main()
{
    int a[100],num,i,sum=0;
    float avg;
    printf("How many number do you want?: ");
    scanf("%d",&num);

    printf("Please enter %d number: \n",num);
    for(i=0; i<num; i++)
    {   printf("\nEnter a[%d] number = ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<num; i++){
        printf("\nOutput a[%d]= %d\n",i,a[i]);

        sum = sum + a[i];
        avg = (float)sum/num;
    }
    printf("The sum is = %d\n",sum);
    printf("The Average is = %.2f",avg);







}
